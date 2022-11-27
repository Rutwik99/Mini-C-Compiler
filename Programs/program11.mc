Function main() Returns Int
{
	Array Char s[1000]

	Array Int freq[128]

	Int i

	Int n = s[1000] / s[0]

	For(i = 0; i < n; i += 1) {
		freq[s[i]] += 1
	}

	Printf("character	frequency")

	For (i = 0; i <= 127; i += 1) {
		If (freq[i] != 0) {
			Printf(i, freq[i])
		}
	}

	Return 0
}