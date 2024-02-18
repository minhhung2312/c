#include <stdio.h>
#include <math.h>
#include <string.h>

//BAI 27:
//SO HOAN HAO:6,28,496,8128:
// int perfectNumber(int n){
//     int sum=1;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0){
//             if(n/i!=i){
//                 sum+=i+n/i;    
//             }
//             else sum+=i;
//         }
//     }
//     return sum==n;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",perfectNumber(n));
// }

//CACH KHAC:
// int prime(long long n){
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0) return 0;
//     }
//     return n>1;
// }
// int perfectNumber(long long n){
//     for(int i=1; i<=32; i++){
//         if(prime(i)){
//             int temp=(int)pow(2,i)-1;
//             if(prime(temp)){
//                 long long res = 1ll* temp*pow(2,i-1);
//                 if(res==n) return 1;
//             }
//         }
//     }
//     return 0;
// }
// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n;
//         scanf("%d",&n);
//         if(perfectNumber(n)) printf("yes\n");
//         else printf("no\n");
//     }
// }

//CACH NHANH HON:
// int prime(int n){
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0) return 0;
//     }
//     return n>1;
// }
// long long fibo[10];
// int n=0;
// void init(){
//     for(int i=1; i<=32; i++){
//         if(prime(i)){
//             int temp=(int)pow(2,i)-1;
//             if(prime(temp)){
//                 fibo[n++]= 1ll*temp*(int)pow(2,i-1);
//             }
//         }
//     }
// }
// int main(){
//     int t;
//     init();
//     scanf("%d",&t);
//     while(t--){
//         long long n;
//         scanf("%lld",&n);
//         int ok=0;
//         for(int i=0; i<=n; i++){
//             if(fibo[i]==n){
//                 ok=1;
//                 break;
//             }
//         }
//         if(ok) printf("yes\n");
//         else printf("no\n");
//     }
// }

//BAI 28:
//TINH TONG CHU SO CUA MOT SO NGUYEN:
// int sum(long long n){
//     int ans=0;
//     while(n){
//         ans+=n%10;
//         n/=10;
//     }
//     return ans;
// }
// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         long long n;
//         scanf("%lld",&n);
//         printf("%d\n",sum(n));
//     }
// }

//BAI 29:
//SO FIBONACCI:
//LIET KE N SO FIBONACCI DAU TIEN:
// void solve(int n){
//     long long fibo[92];
//     fibo[0]=0, fibo[1]=1;
//     for(int i=2; i<92; i++){
//         fibo[i]=fibo[i-1]+fibo[i-2];
//     }
//     for(int i=0; i<n; i++){
//         printf("%lld ",fibo[i]);
//     }
// }
// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n;
//         scanf("%d",&n);
//         solve(n);
//         printf("\n");
//     }
// }

//BAI 30:
//KIEM TRA CO PHAI SO FIBONACCI HAY KHONG:
// long long fibo[100];
// void init(){
//     fibo[0]=0, fibo[1]=1;
//     for(int i=2; i<100; i++){
//         fibo[i]=fibo[i-1]+fibo[i-2];
//     }
// }
// int main(){
//     init();
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         long long n;
//         scanf("%lld",&n);
//         int check=0;
//         for(int i=0; i<100; i++){
//             if(fibo[i]==n){
//                 check=1; break;
//             }
//         }
//         if(check) printf("yes\n");
//         else printf("no\n");
//     }
// }

//BAI 31:
//SO DEP LA SO NGUYEN TO VA CO TONG CAC CHU SO LA SO FIBONACCI:
// int prime(int n){
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0) return 0;
//     }
//     return n>1;
// }
// int sumDigits(int n){
//     int sum=0;
//     while(n){
//         sum+=n%10;
//         n/=10;
//     }
//     return solve(sum);
// }
// int solve(long long n){
//     if(n==1 || n==0)
//         return 1;
//     int fibo[20];
//     fibo[1]=0, fibo[2]=1;
//     for(int i=3; i<=20; i++){
//         fibo[i]=fibo[i-1]+fibo[i-2];
//         if(fibo[i]==n)
//             return 1;
//     }
//     return 0;
// }
// int main(){
//     int l,r;
//     scanf("%d%d",&l,&r);
//     int check=0;
//     for(int i=l; i<r; i++){
//         if(prime(i) && sumDigits(i)){
//             printf("%d ",i);
//             check=1;
//         }
//     }
//     if(!check) printf("-1");
// }

//BAI 32:
//SO THUAN NGHICH VA CO IT NHAT 3 UOC NGUYEN TO KHAC NHAU:
//UOC SO NGUYEN TO --> PHAN TICH THUA SO NGUYEN TO:
//CACH DON GIAN:
// int reversibleNumber(int n){
//     int temp=n;
//     int sum=0;
//     while(n){
//         sum=sum*10+n%10;
//         n/=10;
//     }
//     return sum==temp;
// }
// int prime(int n){
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0) return 0;
//     }
//     return n>1;
// }
// int divisor(int n){
//     int cnt=0;
//     for(int i=1; i<=n; i++){
//         if(n%i==0 && prime(i)) ++cnt;
//     }
//     return cnt>=3;
// }
// int main(){
//     int l,r;
//     scanf("%d%d",&l, &r);
//     for(int i=l; i<=r; i++){
//         if(reversibleNumber(i) && divisor(i))
//             printf("%d ",i);
//     }
// }

//CACH NHANH HON:
// int reversibleNumber(int n){
//     int sum=0, temp=n;
//     while(n){
//         sum=sum*10+n%10;
//         n/=10;
//     }
//     return sum==temp;
// }
// int divisor(int n){
//     int cnt=0;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0){
//             ++cnt;
//             while(n%i==0){
//                 n/=i;
//             }
//         }
//     }
//     if(n!=1) ++cnt;
//     return cnt>=3;
// }
// int main(){
//     int l,r;
//     scanf("%d%d",&l,&r);
//     for(int i=l; i<=r; i++){
//         if(reversibleNumber(i) && divisor(i))
//             printf("%d ",i);
//     }
// }

//BAI 33:
//DEM CHU SO CHAN,LE:
// void oddEvenNumber(int n){
//     int cntOdd=0, cntEvenNumber=0;
//     while(n){
//         int temp=n%10;
//         if(temp%2==0)
//             cntEvenNumber++;
//         else
//             cntOdd++;
//         n/=10;
//     }
//     printf("%d %d",cntOdd, cntEvenNumber);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     oddEvenNumber(n);
// }

//SO STRONG:
//SO STRONG LA SO CO TONG GIAI THUA CAC CHU SO BANG CHINH NO:
//VI DU: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145 LA SO STRONG.
// int factorial(int n){
//     int res=1;
//     for(int i=1; i<=n; i++){
//         res*=i;
//     }
//     return res;
// }
// int strongNumber(int n){
//     int sum=0, temp=n;
//     while(n){
//         sum+=factorial(n%10);
//         n/=10;
//     }
//     return sum==temp;
// }
// int main(){
//     int l,r;
//     scanf("%d%d",&l,&r);
//     for(int i=l; i<=r; i++){
//         if(strongNumber(i))
//             printf("%d ",i);
//     }
// }

//BAI 34:
//SO LOC PHAT:
//SO LOC PHAT LA SO CHI CHU CAC SO 0,6,8:
// int fortune(int n){
//     while(n){
//         int temp=n%10;
//         if(temp!=0 && temp!=6 && temp!=8) return 0;
//         n/=10;
//     }
//     return 1;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",fortune(n));
// }

//SO THUAN NGHICH VA LOC PHAT:
//LA SO THUAN NGHICH, CO CHUA IT NHAT MOT CHU SO 6,
//TONG CAC CHU SO CUA NO CO CHU SO CUOI CUNG LA 8:
int reversibleNumber(int n){
    int sum=0, temp=n;
    while(n){
        sum=sum*10+n%10;
        n/=10;
    }
    return sum==temp;
}
int check(int n){
    int ok=0;
    int sum=0;
    while(n){
        int r=n%10;
        sum+=r;
        if(r==6) ok=1;
        n/=10;
    }
    if(ok && sum%10==8) return 1;
    return 0;
}
int main(){
    int l,r;
    scanf("%d%d",&l,&r);
    for(int i=l; i<=r; i++){
        if(check(i) && reversibleNumber(i)){
            printf("%d ",i);
        }
    }
}