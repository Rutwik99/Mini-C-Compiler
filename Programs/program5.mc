Function main() Returns Int
{
    Int temp
    Int i, n, j
    Array Int num[n]
    Scanf(n)
    For (i = 0 ; i < n; i += 1) {
        num[i] = i+1
    }
    For (j = 1; j <= n; j += 1) {
        For (i = 0; i < n-1; i += 1) {
            temp = num[i]
            num[i] = num[i+1]
            num[i+1] = temp
            For (k = 0 ; k < n ; k += 1) {
                Printf(num[k])
            }
            Printf("\n")
	   }
    }
    Return 0
}