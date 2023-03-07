class Solution{
	public:
	 long long power(int r, int n){

     int m=1000000007;

     if(n==0){

         return 1;

     }

     long long t = power(r, n/2)%m;

     t=t*t%m;

     if(n%2==0){

         return (t)%m;

     }

     return (r*t)%m;

 }
   	int Nth_term(int a, int r, int n){
   	    // Code here
   	         int m=1000000007;


   	    int ans=(a*power(r,n-1))%m;

   	    return ans%m;
   	}
};
