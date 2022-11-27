Function main() Returns Int {
	Int N,l
	Int i
	Scanf(N)
	Int flag
	flag = 0
	For (i = 2; i < N; i+=1){
		If (N % i == 0){
		    flag=1
	    	Break
		}	
	}  
	If(Not flag){
	 	Printf("prime")
	}
	Else{
		Printf("Not Prime")
	}
	Return 0
}