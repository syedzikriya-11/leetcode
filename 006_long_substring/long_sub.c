int lengthOfLongestSubstring(char* s) {
    int i, j;
    int n = 0;
    int max = 0;

    // Find string length
    while (s[n] != '\0') {
        n++;
    }

    // Check every starting position
    for (i = 0; i < n; i++) {
        int count = 0;

        for (j = i; j < n; j++) {
            int duplicate = 0;

            // Check if s[j] appeared earlier
            for (int k = i; k < j; k++) {
                if (s[j] == s[k]) {
                    duplicate = 1;
                    break;
                }
            }

            if (duplicate == 1) {
                break;
            }

            count++;
        }

        if (count > max) {
            max = count;
        }
    }

    return max;
}