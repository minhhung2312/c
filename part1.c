#include <math.h>
#include <stdio.h>
#include <string.h>

//BAI 1:
//KIEM TRA SO NGUYEN TO:
//int snt(int n){
//	for(int i=2; i<=sqrt(n); i++){
//		if(n%i==0) return 0;
//	}
//	return n>1;
//}
//int main(){
//	int n;
//	scanf("%d", &n);
//	printf("%d", snt(n));
//}

//BAI 2:
//LIET KE CAC SO NGUYEN TO KHONG VUOT QUA N:
//int arr[1000001];
//void sieve(){
//	for(int i=0; i<=1000000; i++){
//		arr[i]=1;
//	}
//	arr[1] = arr[0] = 0;
//	for(int i=2; i<=1000; i++){
//		if(arr[i]){
//			for(int j=i*i; j<=1000000; j+=i){
//				arr[j] = 0;
//			}
//		}
//	}
//}
//int main(){
//	int n;
//	scanf("%d", &n);
//	sieve();
//	for(int i=2; i<=n; i++){
//		if(arr[i]) printf("%d ",i);
//	}
//}

//BAI 3:
//SANG SO NGUYEN TO TREN DOAN [A;B]:
//int max(int a, int b){
//	if(a<b)  return b;
//	return a;
//}
//void sieve(int l, int r){
//	int arr[r-l+1];
//	for(int i=0; i<=r-l+1; i++){
//		arr[i] = 1;
//	}
//	for(int i=2; i<=sqrt(r); i++){
//		for(int j=max(i*i, (l+i-1)/i*i); j<=r; j+=i){
//			arr[j-l] = 0;
//		}
//	}
//	for(int i=max(l,2); i<=r; i++){
//		if(arr[i-l]) printf("%d ",i);
//	}
//}
//int main(){
//	int l,r;
//	scanf("%d%d", &l, &r);
//	sieve(l,r);
//}

//BAI 4:
//SANG SO NGUYEN TO VOI NHIEU TEST CASE:
//int arr[1000001];
//void sieve(){
//	for(int i=0; i<=1000000; i++){
//		arr[i]=1;
//	}
//	arr[1] = arr[0] = 0;
//	for(int i=2; i<=1000; i++){
//		for(int j=i*i; j<=1000000; j+=i){
//			arr[j] = 0;
//		}
//	}
//}
//int main(){
//	sieve();
//	int n;
//	scanf("%d",&n);
//	while(n--){
//		int n;
//		scanf("%d", &n);
//		if(arr[n]) printf("yes\n");
//		else printf("no\n");
//	}
//}

//BAI 5:
//DOAN [A;B] CO BAO NHIEU SO NGUYEN TO VA TAT CA CAC CHU SO CUA NO LA SO NGUYEN TO:
//int arr[1000001];
//void sieve(){
//	for(int i=0; i<=100000; i++){
//		arr[i]=1;
//	}
//	arr[1] = arr[0] = 0;
//	for(int i=2; i<=1000; i++){
//		if(arr[i]){
//			for(int j=i*i; j<=1000000; j+=i){
//				arr[j]=0;
//			}
//		}
//	}
//}
//int check(int n){
//	while(n){
//		int r = n%10;
//		if(r!=2 && r!=3 && r!=5 && r!=7)
//		 return 0;
//		n/=10;
//	}
//	return 1;
//}
//int main(){
//	int t;
//	sieve();
//	scanf("%d",&t);
//	while(t--){
//		int a,b;
//		scanf("%d%d",&a, &b);
//		int count=0;
//		for(int i=a; i<=b; i++){
//			if(arr[i] && check(i)) ++count;
//		}
//		printf("%d\n",count);
//	}
//}

//BAI 6:
//LIET KE N SO NGUYEN TO DAU TIEN:
//int prime[10000001];
//void sieve(){
//	for(int i=0; i<=10000000; i++) prime[i]=1;
//	prime[1]=prime[0]=0;
//	for(int i=2; i<=sqrt(10000000); i++){
//		if(prime[i]){
//			for(int j=i*i; j<=10000000; j+=i) prime[j]=0;
//		}
//	}
//}
//int main(){
//	int t;
//	scanf("%d",&t);
//	int i=0, cnt=0;
//	sieve();
//	while(cnt<t){
//		if(prime[i]){
//			printf("%d ",i);
//			++cnt;
//		}
//		++i;
//	}
//}

//BAI 7:
//CAP SO NGUYEN TO CO TONG BANG N:
//int arr[10001];
//void sieve(){
//	for(int i=0; i<=1000;i++) arr[i]=1;
//	arr[1]=arr[0]=0;
//	for(int i=2; i<=100; i++){
//		if(arr[i]){
//			for(int j=i*i; j<=1000; j+=i) arr[j]=0;
//		}
//	}
//}
//int main(){
//	int t;
//	sieve();
//	scanf("%d",&t);
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		for(int i=2; i<=n/2; i++){
//			if(arr[i] && arr[n-i]){
//				printf("%d %d\n",i,n-i);
//			}
//		}
//	}
//}

//BAI 8:
//DEM SO THUAN NGUYEN TO TREN DOAN [A;B]:
//NO LA SO NGUYEN TO, TAT CA CHU SO LA SO NGUYEN TO VA TONG CAC CHU SO CUNG LA SO NGUYEN TO:
//int nt(int n){
//	for(int i=2; i<=sqrt(n); i++){
//		if(n%i==0) return 0;
//	}
//	return n>1;
//}
//int csnt(int n){
//	while(n){
//		int r=n%10;
//		if(!nt(r)) return 0;
//		n/=10;
//	}
//	return 1;
//}
//int tcs(int n){
//	int tong=0;
//	while(n){
//		tong+=n%10;
//		n/=10;
//	}
//	return nt(tong);
//}
//int main(){
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		int a,b;
//		int cnt=0;
//		scanf("%d%d",&a, &b);
//		for(int i=a; i<=b; i++){
//			if(nt(i) && csnt(i) && tcs(i)) ++cnt;
//		}
//		printf("%d ",cnt);
//	}
//}

//BAI 9:
//LIET KE CAC CAP SO NGUYEN TO CUNG NHAU:
//CAP SO NGUYEN TO CUNG NHAU LA CAP SO CO UOC CHUNG LON NHAT LA 1:
//int gcd(int a,int b){
//	if(b==0) return a;
//	return gcd(b, a%b);
//}
//int main(){
//	int a,b;
//	scanf("%d%d",&a, &b);
//	for(int i=a; i<b; i++){
//		for(int j=i+1; j<=b; j++){
//			if(gcd(i,j)==1){
//				printf("(%d,%d)\n",i,j);
//			}
//		}
//	}
//}

//BAI 10:
//LIET KE CAC SO T-PRIME:
//SO T-PRIME LA CAC SO CO DUNG 3 UOC SO.
//CACH DON GIAN NHAT:
//int t_prime(int n){
//	int cnt=0;
//	for(int i=1; i<=n; i++){
//		if(n%i==0) ++cnt;
//	}
//	return cnt==3;
//}
//int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		for(int i=0; i<=n; i++){
//			if(t_prime(i)) printf("%d ",i);
//		}
//		printf("\n");
//	}
//}
//CACH KHAC:
//SO CO 3 UOC SO LA BINH PHUONG CUA MOT SO NGUYEN TO:
//int arr[1001];
//void sieve(){
//	for(int i=0; i<=1000; i++) arr[i]=1;
//	arr[1]=arr[0]=0;
//	for(int i=2; i<=sqrt(1000); i++){
//		if(arr[i]){
//			for(int j=i*i; j<=1000; j+=i) arr[j]=0;
//		}
//	}
//}
//int main(){
//	int t;
//	sieve();
//	scanf("%d",&t);
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		for(int i=2; i<=sqrt(n); i++){
//			if(arr[i]){
//				printf("%d ", i*i);
//			}
//		}
//		printf("\n");
//	}
//}

//BAI 11:
//DEM CAC SO T-PRIME NHO HON N:
//int arr[1000001];
//void sieve(){
//	for(int i=0; i<=1000000; i++) arr[i]=1;
//	arr[1]=arr[0]=0;
//	for(int i=2; i<=1000; i++){
//		if(arr[i]){
//			for(int j=i*i; j<=1000000; j+=i) arr[j]=0;
//		}
//	}
//}
//int main(){
//	sieve();
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		int cnt=0;
//		long long n;
//		scanf("%lld", &n);
//		for(int i=2; i<=sqrt(n); i++){
//			if(arr[i]) ++cnt;
//		}
//		printf("%d\n",cnt);
//	}
//}

//BAI 12:
//DEM SO T-PRIME TRONG DOAN [A;B]:
//int arr[1000001];
//void sieve(){
//	for(int i=0; i<=1000000; i++) arr[i]=1;
//	arr[1]=arr[0]=0;
//	for(int i=2; i<=1000; i++){
//		if(arr[i]){
//			for(int j=i*i; j<=1000000; j+=i) arr[j]=0;
//		}
//	}
//}
//int main(){
//	int t;
//	scanf("%d",&t);
//	sieve();
//	while(t--){
//		int l,r;
//		int cnt=0;
//		scanf("%d%d", &l, &r);
//		int a=sqrt(l);
//		if(a*a!=l) ++a;//kiem tra xem l co phai la so chinh phuong hay khong
//		for(int i=a; i<=sqrt(r); i++){
//			if(arr[i]) ++cnt;
//		}
//		printf("%d\n",cnt);
//	}
//}

//BAI 13:
//LIET KE UOC SO NGUYEN TO NHO NHAT:
//int arr[1000001];
//void sieve(){
//	for(int i=0; i<=1000000; i++) arr[i]=i;
//	for(int i=2; i<=1000; i++){
//		if(arr[i]){
//			for(int j=i*i; j<=1000000; j+=i) arr[j]=i;
//		}
//	}
//}
//int main(){
//	int t;
//	sieve();
//	scanf("%d",&t);
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		for(int i=1; i<=n; i++){
//			printf("%d",arr[i]);
//		}
//		printf("\n");
//	}
//}

//BAI 14:
//THUA SO NGUYEN TO CUA MOT SO:
//IN TAT CA THUA SO NGUYEN TO:
//void pt(int n){
//	for(int i=2; i<=sqrt(n); i++){
//		while(n%i==0){
//			printf("%d ",i);
//			n/=i;
//		}
//	}
//	if(n!=1) printf("%d",n);
//}
//int main(){
//	int n;
//	scanf("%d", &n);
//	pt(n);
//}

//BAI 14:
//CHI IN THUA SO NGUYEN TO 1 LAN:
//void pt(int n){
//	for(int i=2; i<=sqrt(n); i++){
//		if(n%i==0){
//			printf("%d ",i);
//			while(n%i==0) n/=i;
//		}
//	}
//	if(n!=1) printf("%d",n);
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	pt(n);
//}

//BAI 14:
//PHAN TICH THUA SO NGUYEN TO THEO VI DU:
//INPUT: 28
//OUTPUT: 2(2) 7(1)
//void pt(int n){
//	for(int i=2; i<=sqrt(n); i++){
//		if(n%i==0){
//			int cnt=0;
//			while(n%i==0){
//				++cnt; n/=i;
//			}
//			printf("%d(%d)",i,cnt);
//		}
//	}
//	if(n!=1) printf("%d(1)",n);
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	pt(n);
//}

//BAI 14:
//PHAN TICH THUA SO NGUYEN TO THEO VI DU:
//INPUT: 28
//OUTPUT: 2x2x7
//void pt(int n){
//	for(int i=2; i<=sqrt(n); i++){
//		while(n%i==0){
//			printf("%d",i);
//			n/=i;
//			if(n!=1) printf("x");
//		}
//	}
//	if(n!=1) printf("%d",n);
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	pt(n);
//}

//BAI 14:
//PHAN TICH THUA SO NGUYEN TO THEO VI DU:
//INPUT: 60
//OUTPUT: 60 = 2^2 * 3^1 * 5^1
//void pt(int n){
//	printf("%d = ",n);
//	for(int i=2; i<=sqrt(n); i++){
//		if(n%i==0){
//			int cnt=0;
//			while(n%i==0){
//				++cnt;
//				n/=i;
//			}
//			printf("%d^%d",i,cnt);
//			if(n!=1) printf(" * ");
//		}
//	}
//	if(n!=1) printf("%d^1",n);
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	pt(n);
//}

//BAI 15:
//PHAN TICH THUA SO NGUYEN TO KET HOP VOI SANG SO NGUYEN TO:
//int arr[100001];
//void sieve(){
//	for(int i=0; i<=100000; i++) arr[i]=i;
//	for(int i=2; i<=sqrt(100000); i++){
//		if(arr[i]){
//			for(int j=i*i; j<=100000; j+=i){
//				if(arr[j]==j) arr[j]=i;
//			}
//		}
//	}
//}
//void pt(int n){
//	while(n!=1){
//		int cnt=0;
//		int tmp=arr[n];
//		while(n%tmp==0){
//			++cnt;
//			n/=tmp;
//		}
//		printf("%d(%d)",tmp,cnt);
//	}
//	printf("\n");
//}
//int main(){
//	int t;
//	scanf("%d",&t);
//	sieve();
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		pt(n);
//	}
//}

//CACH DON GIAN HON:
//int arr[100001];
//void sieve(){
//	for(int i=0; i<=100000; i++) arr[i]=i;
//	for(int i=2; i<=sqrt(100000); i++){
//		if(arr[i]){
//			for(int j=i*i; j<=100000; j+=i){
//				if(arr[j]==j) arr[j]=i;
//			}
//		}
//	}
//}
//void pt(int n){
//	while(n!=1){
//		printf("%d ",arr[n]);
//		n/=arr[n];
//	}
//	printf("\n");
//}
//int main(){
//	int t;
//	sieve();
//	scanf("%d",&t);
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		pt(n);
//	}
//}

//BAI 16:
//DEM CAC UOC SO KHAC NHAU CUA PHAN TICH THUA SO NGUYEN TO:
//INPUT: 60
//OUTPUT: 3
//int count(int n){
//	int res=0;
//	for(int i=2; i<=sqrt(n); i++){
//		if(n%i==0){
//			++res;
//			while(n%i==0) n/=i;
//		}
//	}
//	if(n!=1) ++res;
//	return res;
//}
//int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		printf("%d\n",count(n));
//	}
//}

//BAI 17:
//BAC CUA SO NGUYEN TO TRONG N GIAI THUA:
//CACH LAM DON GIAN:
//int count(int n, int p){
//	int ans=0;
//	for(int i=p; i<=n; i+=p){
//		int temp=i;
//		while(temp%p==0){
//			++ans;
//			temp/=p;
//		}
//	}
//	return ans;
//}
//int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		int n,p;
//		scanf("%d%d",&n,&p);
//		printf("%d\n",count(n,p));
//	}
//}

//CACH LAM NHANH HON:
//CONG THUC LEGENDRE:
//TA CO: [N/P^1] + [N/P^2] + [N/P^3] + ... + [N/P^X] (P^X<N) VA LAY CAN DUOI CUA MOI PHEP TOAN.
//VI DU: N=10; P=3:
//TA CO: [10/3] + [10/9] = 4
//int count(int n, int p){
//	int ans=0;
//	for(int i=p; i<=n; i*=p){
//		ans+=n/i;
//	}
//	return ans;
//}
//int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		int n,p;
//		scanf("%d%d",&n,&p);
//		printf("%d\n",count(n,p));
//	}
//}

//BAI 18:
//DEM CHU SO 0 TAN CUNG CUA N GIAI THUA:
//CHU SO 0 TAN CUNG: CO NGHIA LA MOT SO NHAN VOI 10(2X5).
//TA CHI CAN DEM SO LAN XUAT HIEN CUA 2 VA 5, LAY SO LAN XUAT HIEN IT HON: LA 5.
//int count(int n){
//	int ans=0;
//	for(int i=5; i<=n; i*=5){
//		ans+=n/i;
//	}
//	return ans;
//}
//int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		printf("%d\n",count(n));
//	}
//}

//BAI 19:
//SO SPHENIC:
//SO SPHENIC LA SO CO 3 UOC SO KHAC NHAU:
//int analysis(int n){
//	int res=0;
//	for(int i=2; i<=sqrt(n); i++){
//		int cnt=0;
//		while(n%i==0){
//			++cnt;
//			n/=i;
//		}
//		if(cnt>=2) return 0;
//		if(cnt==1) ++res;
//	}
//	if(n!=1) ++res;
//	return res==3;
//}
//int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		printf("%d\n",analysis(n));
//	}
//}

//BAI 20:
//SO SMITH:
//N DUOC GOI LA SO SMITH LA N KHONG PHAI SO NGUYEN TO. TONG CAC CHU SO CUA N BANG
//TONG CAC CHU SO CUA CAC UOC NGUYEN TO CUA N.
//VI DU: 666 LA SO SMITH. CO CAC UOC NGUYEN TO LA: 2,3,3,37 TONG CAC CHU SO LA 18.
//int sum(int n){
//	int ans=0;
//	while(n){
//		ans+=n%10;
//		n/=10;
//	}
//	return ans;
//}
//int smith(int n){
//	int sum1=sum(n);
//	int sum2= 0;
//	int temp=n;
//	for(int i=2; i<=sqrt(n); i++){
//		while(n%i==0){
//			sum2+=sum(i);
//			n/=i;
//		}
//	}
//	if(temp==n) return 0;
//	if(n!=1){
//		sum2+=sum(n);
//	}
//	return sum1==sum2;
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	printf("%d",smith(n));
//}

//BAI 21:
//TIM UOC NGUYEN TO LON NHAT CUA MOT SO NGUYEN DUONG:
//CACH DON GIAN:
//int prime(int n){
//	for(int i=2; i<=sqrt(n); i++){
//		if(n%i==0) return 0;
//	}
//	return n>1;
//}
//int find(int n){
//	for(int i=n; i>=1; i--){
//		if(n%i==0 && prime(i)) return i;
//	}
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	printf("%d ",find(n));
//}

//CACH NHANH HON:
//int analysis(int n){
//	int res;
//	for(int i=2; i<=sqrt(n); i++){
//		while(n%i==0){
//			res=i;
//			n/=i;
//		}
//	}
//	if(n!=1) res=n;
//	return res;
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	printf("%d",analysis(n));
//}

//BAI 22:
//SO DEP: TIM SO CHIA HET CHO MOT SO NGUYEN TO VA 
//CHO BINH PHUONG SO NGUYEN TO DO TRONG DOAN [A;B]:
//int niceNumber(int n){
//	for(int i=2; i<=sqrt(n); i++){
//		int cnt=0;
//		while(n%i==0){
//			++cnt;
//			n/=i;
//		}
//		if(cnt>=2) return 1;
//	}
//	return 0;
//}
//int main(){
//	int l,r;
//	scanf("%d%d",&l,&r);
//	for(int i=l; i<=r; i++){
//		if(niceNumber(i)) printf("%d ",i);
//	}
//}

//BAI 22:
//SO DEP 2: TIM SO CHIA HET CHO TAT CA SO NGUYEN TO VA 
//CHO TAT CA BINH PHUONG SO NGUYEN TO DO TRONG DOAN [A;B]:
//int arr[1000001];
//void niceNumber(){
//	for(int i=0; i<=1000000; i++) arr[i]=i;
//	for(int i=2; i<=1000; i++){
//		if(arr[i]){
//			for(int j=i*i; j<=1000000; j*=i) arr[j]=1;
//		}
//	}
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	niceNumber();
//	for(int i=2; i<=n; i++){
//		if(arr[i]==1) printf("%d ",i);
//	}
//}

//CACH KHAC:
//int niceNumber(int n){
//	int temp=0;
//	for(int i=2; i<=sqrt(n); i++){
//		int cnt=0;
//		while(n%i==0){
//			++cnt;
//			n/=i;
//		}
//		if(cnt==1) return 0;
//		if(cnt>=2) temp=1;
//	}
//	if(n!=1) return 0;
//	return temp;
//}
//int main(){
//	int l,r;
//	scanf("%d%d",&l,&r);
//	for(int i=l; i<=r; i++){
//		if(niceNumber(i)==1) printf("%d ",i);
//	}
//}

//BAI 22:
//SO THUAN NGHICH (SO DOI XUNG):
// int symmetry(int n){
// 	int temp=n;
// 	int sum=0;
// 	while(n){
// 		sum=sum*10+n%10;
// 		n/=10;
// 	}
// 	return temp==sum;
// }
// int main(){
// 	int n;
// 	scanf("%d",&n);
// 	printf("%d", symmetry(n));
// }

//CACH KHAC:
// int symmetry(char c[]){
// 	int l=0, r=strlen(c)-1;
// 	while(l,r){
// 		if(c[l]!=c[r]) return 0;
// 		++l; --r;
// 	}
// 	return 1;
// }
// int main(){
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 		char c[100];
// 		scanf("%s",c);
// 		if(symmetry(c)) printf("yes\n");
// 		else printf("no\n");
// 	}
// }

//BAI 23:
//KIEM TRA SO CHINH PHUONG:
// int squareNumber(long long n){
// 	int temp=sqrt(n)+0.5; // can bac 2,3 thuong bi loi nen +0.5 de lam tron.
// 	if(1ll*temp*temp==n) return 1;
// 	return 0;
// }
// int main(){
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 		long long n;
// 		scanf("%lld",&n);
// 		if(squareNumber(n)){
// 			printf("yes\n");
// 		}
// 		else printf("no\n");
// 	}
// }

//LIET KE SO CHINH PHUONG:
// int main(){
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 		int l,r;
// 		scanf("%d%d",&l,&r);
// 		int c1=sqrt(l), c2=sqrt(r);
// 		if(c1*c1!=l) ++c1;
// 		for(int i=c1; i<=c2; i++){
// 			printf("%d ",i*i);
// 		}
// 		printf("\n");
// 	}
// }

//BAI 24:
//DEM SO CHINH PHUONG TREN DOAN [A;B]:
// int main(){
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 		int l,r;
// 		scanf("%d%d",&l,&r);
// 		int temp=sqrt(l);
// 		if(temp*temp!=l) ++temp;
// 		printf("%d\n",(int)sqrt(r)-temp+1);
// 	}
// }

//BAI 25:
//DEM UOC CUA SO NGUYEN:
// int divisor(int n){
// 	int cnt=0;
// 	for(int i=1; i<=sqrt(n); i++)
// 	if(n%i==0) cnt+=2;
// 	int c=sqrt(n);
// 	if(c*c==n) --cnt;
// 	return cnt;
// }
// int main(){
// 	int n;
// 	scanf("%d",&n);
// 	printf("%d",divisor(n));
// }

//CACH KHAC:
//PHAN TICH THUA SO NGUYEN TO:
//CTTQ: N = P1^L1 * P2*L2 * P3^L3 *...*PN^LN
//SO UOC CUA N: D(N) =(L1+1)(L2+1)(L3+1)...(LN+1)
//VIDU: 60 = 2^2 * 3^1 * 5^1
//SO UOC CUA 60: (2+1)(1+1)(1+1)=12. {1,2,3,4,5,6,10,12,15,20,30,60}
// int divisor(int n){
// 	int sum=1;
// 	for(int i=2; i<=sqrt(n); i++){
// 		if(n%i==0){
// 			int cnt=0;
// 			while(n%i==0){
// 				++cnt;
// 				n/=i;
// 			}
// 			sum*=(cnt+1);
// 		}
// 	}
// 	if(n!=1) sum*=2;
// 	return sum;
// }
// int main(){
// 	int n;
// 	scanf("%d",&n);
// 	printf("%d",divisor(n));
// }

//TINH TONG UOC CUA SO NGUYEN:
// int sumDivisor(int n){
// 	int sum=0;
// 	for(int i=1; i<=sqrt(n); i++){
// 		if(n%i==0){
// 			if(n/i!=i){
// 				sum+=i+n/i;
// 			}
// 			else
// 			sum+=i;
// 		}
		
// 	}
// 	return sum;
// }
// int main(){
// 	int n;
// 	scanf("%d",&n);
// 	printf("%d",sumDivisor(n));
// }

//BAI 26:
//KIEM TRA SO CO SO LUONG UOC LA SO LE:
//SO CHINH PHUONG LA SO CO SO LUONG UOC LE:
// int squareNumber(int n){
// 	int temp=sqrt(n)+0.5;
// 	if(temp*temp==n)
// 		return 1;
// 	return 0;
// }
// int main(){
// 	int n;
// 	scanf("%d",&n);
// 	printf("%d",squareNumber(n));
// }