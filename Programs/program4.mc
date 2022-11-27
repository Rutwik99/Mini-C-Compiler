Function pyth_triplets(Int max_limit) Returns Void
{ 
  
    Int a, b, c
    c = 0 
  
    Int m
    m = 2 
  	
  	Int cnt
  	cnt = 0

    Int n
    While (c < max_limit) { 
  
        For ( n = 1; n < m; n += 1) { 
  
            a = m * m - n * n 
            b = 2 * m * n 
            c = m * m + n * n 
  
            If (c > max_limit) {
                break 
            }
  			
  			cnt += 1
            Printf(a, b, c)
        } 
        m += 1
    } 
    Printf(cnt)
} 

Function main() Returns Int
{ 
    Int max_limit
    max_limit = 100000000 
    pyth_triplets(max_limit)
    Return 0 
} 