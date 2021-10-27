   #include<stdio.h>
   #include<limits.h>
   void main()
   {
   	    printf("Short Int:\nSigned:%hd to %hd\n",SHRT_MIN, SHRT_MAX);
   	    printf("unsigned: %d to %hu",0, USHRT_MAX);
   	    
   	    printf("Int:\nSigned: %d to %d\n ",INT_MIN, INT_MAX);
   	    printf("unsigned: %d to %u",0,UINT_MAX);
   	    
   	    printf("Long Int:\nsigned:%ld to %ld\n",LONG_MIN,LONG_MAX);
   	    printf("unsigned:%lu to %lu",0,ULONG_MAX);
   	    
   	    printf("Long Long Int:\nSigned:%lld to %lld\n",LLONG_MIN, LLONG_MAX);
   	    printf("unsigned:%llu to %llu",0,ULLONG_MAX);
   	    
   }
