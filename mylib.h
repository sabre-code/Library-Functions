#include <stdio.h>

char *substr(char *string, char *substring){
   char *b;
   b = substring;
   if (*b == 0) {
	   return string;
   }
   while(*string != 0){
      if(*string != *b){
         *string++;
         continue;
      }
      return string;
   }
}

int strLength(char *string){
   int l = 0;
   while(*string != '\0'){
      l++;
      *string++;
   }
   return l;
}

int palindrome(char *str){
   int l = 0;
   int h = strLength(str) - 1;
   while (h > l){
      if(str[l++] != str[h--]){
         return 0 ;
      }
   }
    return 1;
}

int charfreq(char *string,char *string_1){
   int l = 0;
   int cnt = 0;
   while ( *string != '\0'){
      if(*string == *string_1){
         cnt++;
      }
      *string++;   
   }
   return cnt;
}

char *strrev (char *str){
   int i;
   int len = 0;
   char c;

   len = strLength(str); 
   for(i = 0; i < (len/2); i++){
      c = str[i];
      str [i] = str[len - i - 1];
      str[len - i - 1] = c;
   }
   return str;
}

char *stringLower(char * s){
   char *t = s;
   
   int i = 0;
   while ( *t != '\0' ){
      if (*t >= 'A' && *t <= 'Z' ){
              *t = *t + ('a' - 'A');
      }
      t++;
   }
   return s;
}

char *stringUpper(char * s){
   char *t = s;

   int i = 0;
   while ( *t != '\0' ){
           if (*t >= 'a' && *t <= 'z' ){
                   *t = *t - ('a' - 'A');
           }
           t++;
   }
   return s;
}



void asciiConverter(char *p) // function def
{
    printf("\n String with ASCII values...\n");
    while(*p!='\0')
    {
        printf("\n%c=%d",*p,*p);
        p++;
    }
}

int countSpaces(char str[]) // function definition
{

    int i, c = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            c++;
    }
    return c;
}

 int countWords(char str[])                   //function definition
{
   int i,c=0;
   for(i=0; str[i]!='\0';i++){
      if(str[i]==' ')
      c++;
   }
   c=c+1;
   return c;
}

int searchChar(char *p, char ch) // function definition
{
    int f = 0;
    while (*p != '\0')
    {
        if (*p == ch)
        {
            f = 1;
            break;
        }
        p++;
    }
    return f;
}

void countAllCharType(char str[])
{
    int i,c1=0,c2=0,c3=0,c4=0;
     for(i=0;str[i]!='\0';i++)
     {
       if(str[i]>=65 && str[i]<=90) //A = 65 ...Z= 90
        {
            c1++;
        }
        else
        {
            if(str[i]>=97 && str[i]<=122)//a = 97...z = 122
            {
                c2++;
            }
            else
            {
                if(str[i]>=48 && str[i]<=57)// 0 = 47 .... 9 = 55
                {
                c3++;
                }
                else 
                {
                    c4 ++;
                }
            }
           
        }
    }
    printf("\n Upper = %d\n Lower = %d\n Digits = %d\n other characters = %d",c1,c2,c3,c4);
}

int compareString(char *first, char *second)
{
   while(*first==*second)
   {
      if ( *first == '\0' || *second == '\0' )
         break;
 
      first++;
      second++;
   }
   if( *first == '\0' && *second == '\0' )
      return 0;
   else
      return -1;
}

void concatenate(char *Str1, char *Str2)
{
	while(*Str1)
	{
		Str1++;
	}
	
	while(*Str2)
	{
		*Str1 = *Str2;
		*Str1++;
		*Str2++;
  	}
  	*Str1 = '\0';
}

void copyString(char *target, char *source)
{
    while(*source)
    {
        *target = *source;        
        source++;        
        target++;
    }    
    *target = '\0';
}

char *strOccur(char *string, char letter){
   char *ptr;
   while (*string!=letter && *string!='\0')
      ptr=++string;
      return (ptr);
}

int consonantCount(char * s){
    char *t = s;
    int cnt = 0;
    while ( *t != '\0' ){
            if (*t == 'a' || *t == 'A' || *t == 'e' || *t == 'E'|| *t == 'i' ||
                *t == 'I' ||*t == 'o' || *t == 'O'|| *t == 'u' || *t == 'U'){
                cnt++;
            }

            t++;
    }
    return strLength(s) -  cnt;
}

int vowelCount(char * s){
   char *t = s;  
   int cnt = 0;
   while ( *t != '\0' ){
      if (*t == 'a' || *t == 'A' || *t == 'e' || *t == 'E'|| *t == 'i' ||
          *t == 'I' ||*t == 'o' || *t == 'O'|| *t == 'u' || *t == 'U'){
          cnt++;
      }
      t++;
   }
   return cnt;
}

int minmax(int a, int b){
   if(a == b)
      printf("Both number are equal.\n");
   if( a > b )
      printf("%d is greater than %d\n",a,b);
   else
      printf("%d is greater than %d\n",b,a);

}

float avg(float a, float b){
   return((a + b)/2);
}

void matrixmul(){
   int m,n,m1,n1;
    printf("\nEnter Rows and columns of first matrix:\n");
    scanf("%d %d",&m,&n);
    printf("\nEnter Rows and columns of second matrix:\n");
    scanf("%d %d",&m1,&n1);
    if(n != m1){
        printf("\nMultiplication of matrix with these dimensions is not possible.");
        return;
    }
    int a[m][n],b[m1][n1],c[m][n1];
    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("A[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < m1; i++){
        for (int j = 0; j < n1; j++){
            printf("B[%d][%d] :",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    int sum = 0,o = 0,p = 0,q = 0,r = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n1; j++){
            sum = 0;
            o = i;
            p = 0;
            q = 0;
            r = j;
            for (int k = 0; k < n; k++){
                sum = sum + a[o][p] * b[q][r];
                q++;p++;
            }
            c[i][j] = sum;
        }
    }
    printf("\nMatrix A :\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nMatrix B :\n");
    for (int i = 0; i < m1; i++){
        for (int j = 0; j < n1; j++){
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nMatrix AB :\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n1; j++){
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}


int power(int a,int b){
    int i = 0,ans = 1;
    while (i < b)
    {
       ans = ans * a;
       i++;
    }
    return ans;
    
}

int binToDec(long long n) {
    int dec = 0, i = 0, rem;

    while (n!=0) {
        rem = n % 10;
        n /= 10;
        dec += rem * power(2, i);
        ++i;
    }
    getchar();
    return dec;
}

long int decToBin(int n) {
  long int bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }
    getchar();
    return bin;
}

void matrixAdd(){
   int m,n,m1,n1;
    printf("\nEnter Rows and columns of first matrix:\n");
    scanf("%d %d",&m,&n);
    printf("\nEnter Rows and columns of second matrix:\n");
    scanf("%d %d",&m1,&n1);
    if(n != n1 || m != m1){
        printf("\nAddition or Subraction of matrix with these dimensions is not possible.");
        getchar();
        return;
    }
    int a[m][n],b[m1][n1],c[m1][n1];
    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("A[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < m1; i++){
        for (int j = 0; j < n1; j++){
            printf("B[%d][%d] :",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n1; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nMatrix A :\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nMatrix B :\n");
    for (int i = 0; i < m1; i++){
        for (int j = 0; j < n1; j++){
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nMatrix C :\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n1; j++){
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}
void matrixSub(){
   int m,n,m1,n1;
    printf("\nEnter Rows and columns of first matrix:\n");
    scanf("%d %d",&m,&n);
    printf("\nEnter Rows and columns of second matrix:\n");
    scanf("%d %d",&m1,&n1);
    if(n != n1 || m != m1){
        printf("\nAddition or Subraction of matrix with these dimensions is not possible.");
        getchar();
        return;
    }
    int a[m][n],b[m1][n1],c[m1][n1];
    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("A[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < m1; i++){
        for (int j = 0; j < n1; j++){
            printf("B[%d][%d] :",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n1; j++){
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("\nMatrix A :\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nMatrix B :\n");
    for (int i = 0; i < m1; i++){
        for (int j = 0; j < n1; j++){
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nMatrix C :\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n1; j++){
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}

void leapYear(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d is a leap year.", year);
    }
    else if (year % 100 == 0) {
        printf("%d is not a leap year.", year);
   }
    else if (year % 4 == 0) {
        printf("%d is a leap year.", year);
   }
    else {
        printf("%d is not a leap year.", year);
   }
   getchar();
}