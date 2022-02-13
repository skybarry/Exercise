
#define LEN 31

struct names {                      
	    char first[LEN];
		    char last[LEN];
} ;
struct guy {
	struct names handle;           // nested structure
	char favfood[LEN];
    char job[LEN];
    float income;
} ;
