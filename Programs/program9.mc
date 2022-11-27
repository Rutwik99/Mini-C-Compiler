Function main() Returns Int {
	Int n1
	Int n2
	Int i
	Int a
	Int k
	Scanf(n1,n2)
	Array Int arr1[n1][n2]
	Array Int arr2[n1][n2]

	For(i = 0; i < n1; i += 1){
		For(k = 0;k < n2;k += 1){
			Scanf(a)
			arr1[i][k]=a
		}
	}
	For(i = 0; i < n1; i += 1){
		For(k = 0;k < n2;k += 1){
			Scanf(a)
			arr2[i][k]=a
		}
	}
	Array Int ans[n1][n2]
	For(i = 0; i < n1; i+=1){
		For(k = 0; k < n2; k+=1){
			ans[i][k] = arr1[i][k] + arr2[i][k]
		}
	}
	Return ans
}