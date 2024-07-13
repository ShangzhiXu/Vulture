#define getwc(f) \
	((f)->rpos != (f)->rend && *(f)->rpos < 128 ? *(f)->rpos++ : (getwc)(f))
#define ungetwc(c,f) \
	((f)->rend && (c)<128U ? *--(f)->rpos : ungetwc((c),(f)))
