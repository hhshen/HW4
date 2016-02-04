
int compare(int a, int b) {
	    return b - a;
}

int wrap(const void *a, const void *b) {
	
	return ( *(int *)b - *(int *)a );
}
