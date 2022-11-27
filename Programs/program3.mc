Function isPrime(Int N) Returns Bool {
	Int flag
	Int i
	flag = 0
 	For (i = 2; i < N; i += 1){
        If (N % i == 0){
	        flag=1
	        Break
        }
    }  
    Bool ans
    ans = false
    If(Not flag){
    	ans=true
    }
    Return ans
}
Function main() Returns Int {
	Int N
	Scanf(N)
	Int sum = 0
	Int i
	For(i = 2; i < N; i += 1){
		If(isPrime(i) == true){
			sum += i
		}
	}
	Printf(sum)
	Return 0
}