static CURLcode check_telnet_options(struct Curl_easy *data)
{
  struct curl_slist *head;
  struct curl_slist *beg;
  struct TELNET *tn = data->req.p.telnet;
  CURLcode result = CURLE_OK;

  /* Add the user name as an environment variable if it
     was given on the command line */
  if(data->state.aptr.user) {
    char buffer[256];
    msnprintf(buffer, sizeof(buffer), "USER,%s", data->conn->user);
    beg = curl_slist_append(tn->telnet_vars, buffer);
    if(!beg) {
      curl_slist_free_all(tn->telnet_vars);
      tn->telnet_vars = NULL;
      return CURLE_OUT_OF_MEMORY;
    }
    tn->telnet_vars = beg;
    tn->us_preferred[CURL_TELOPT_NEW_ENVIRON] = CURL_YES;
  }

  for(head = data->set.telnet_options; head && !result; head = head->next) {
    size_t olen;
    char *option = head->data;
    char *arg;
    char *sep = strchr(option, '=');
    if(sep) {
      olen = sep - option;
      arg = ++sep;
      switch(olen) {
      case 5:
        /* Terminal type */
        if(strncasecompare(option, "TTYPE", 5)) {
          strncpy(tn->subopt_ttype, arg, 31);
          tn->subopt_ttype[31] = 0; /* String termination */
          tn->us_preferred[CURL_TELOPT_TTYPE] = CURL_YES;
        }
        else
          result = CURLE_UNKNOWN_OPTION;
        break;

      case 8:
        /* Display variable */
        if(strncasecompare(option, "XDISPLOC", 8)) {
          strncpy(tn->subopt_xdisploc, arg, 127);
          tn->subopt_xdisploc[127] = 0; /* String termination */
          tn->us_preferred[CURL_TELOPT_XDISPLOC] = CURL_YES;
        }
        else
          result = CURLE_UNKNOWN_OPTION;
        break;

      case 7:
        /* Environment variable */
        if(strncasecompare(option, "NEW_ENV", 7)) {
          beg = curl_slist_append(tn->telnet_vars, arg);
          if(!beg) {
            result = CURLE_OUT_OF_MEMORY;
            break;
          }
          tn->telnet_vars = beg;
          tn->us_preferred[CURL_TELOPT_NEW_ENVIRON] = CURL_YES;
        }
        else
          result = CURLE_UNKNOWN_OPTION;
        break;

      case 2:
        /* Window Size */
        if(strncasecompare(option, "WS", 2)) {
          char *p;
          unsigned long x = strtoul(arg, &p, 10);
          unsigned long y = 0;
          if(x && (x <= 0xffff) && Curl_raw_tolower(*p) == 'x') {
            p++;
            y = strtoul(p, NULL, 10);
            if(y && (y <= 0xffff)) {
              tn->subopt_wsx = (unsigned short)x;
              tn->subopt_wsy = (unsigned short)y;
              tn->us_preferred[CURL_TELOPT_NAWS] = CURL_YES;
            }
          }
          if(!y) {
            failf(data, "Syntax error in telnet option: %s", head->data);
            result = CURLE_SETOPT_OPTION_SYNTAX;
          }
        }
        else
          result = CURLE_UNKNOWN_OPTION;
        break;

      case 6:
        /* To take care or not of the 8th bit in data exchange */
        if(strncasecompare(option, "BINARY", 6)) {
          int binary_option = atoi(arg);
          if(binary_option != 1) {
            tn->us_preferred[CURL_TELOPT_BINARY] = CURL_NO;
            tn->him_preferred[CURL_TELOPT_BINARY] = CURL_NO;
          }
        }
        else
          result = CURLE_UNKNOWN_OPTION;
        break;
      default:
        failf(data, "Unknown telnet option %s", head->data);
        result = CURLE_UNKNOWN_OPTION;
        break;
      }
    }
    else {
      failf(data, "Syntax error in telnet option: %s", head->data);
      result = CURLE_SETOPT_OPTION_SYNTAX;
    }
  }

  if(result) {
    curl_slist_free_all(tn->telnet_vars);
    tn->telnet_vars = NULL;
  }

  return result;
}
