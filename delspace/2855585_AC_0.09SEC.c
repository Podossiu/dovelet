char* d(char *s){char *ret = s;while(*s){*(ret) = *s; if( *ret != ' ') ret++; s++;}*ret = '\0';}int main(){char a[1001];gets(a);d(a);printf("%s", a);}
