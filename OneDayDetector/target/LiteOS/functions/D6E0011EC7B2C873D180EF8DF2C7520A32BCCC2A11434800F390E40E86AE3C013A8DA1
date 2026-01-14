void Curl_free_primary_ssl_config(struct ssl_primary_config *sslc)
{
  Curl_safefree(sslc->CApath);
  Curl_safefree(sslc->CAfile);
  Curl_safefree(sslc->clientcert);
  Curl_safefree(sslc->random_file);
  Curl_safefree(sslc->egdsocket);
  Curl_safefree(sslc->cipher_list);
  Curl_safefree(sslc->cipher_list13);
  Curl_safefree(sslc->pinned_key);
  Curl_safefree(sslc->cert_blob);
  Curl_safefree(sslc->ca_info_blob);
  Curl_safefree(sslc->curves);
}
