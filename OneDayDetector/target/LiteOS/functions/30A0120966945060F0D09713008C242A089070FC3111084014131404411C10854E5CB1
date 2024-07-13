remove_pn_file()
{
	char *path;

	if ((path = name_of_pn_file()) != NULL) {
		(void) unlink(path);
		(void) free(path);
	}
}
