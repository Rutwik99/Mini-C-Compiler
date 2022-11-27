Function main() Returns Int
{
    Int m, n, p, q, c, d, k, sum
    sum = 0
    Array Int first[10][10], second[10][10], multiply[10][10]

    Scanf(m, n)

    For (c = 0; c < m; c+=1) {
        For (d = 0; d < n; d+=1) {
            Scanf(first[c][d])
        }
    }

    Scanf(p,q)

    If (n != p){
        Printf("The multiplication isn't possible.\n")
    }
    Else
    {
        For (c = 0; c < p; c+=1){
            For (d = 0; d < q; d+=1){
                Scanf(second[c][d])
            }
        }

        For (c = 0; c < m; c+=1) {
            For (d = 0; d < q; d+=1) {
                For (k = 0; k < p; k+=1) {
                    sum = sum + first[c][k]*second[k][d]
                }

                multiply[c][d] = sum
                sum = 0
            }
        }

        Printf("Product of the matrices:\n")

        For (c = 0; c < m; c+=1) {
            For (d = 0; d < q; d+=1) {
                Printf(multiply[c][d])
            }
            Printf("\n")
        }
    }

    Return 0
}