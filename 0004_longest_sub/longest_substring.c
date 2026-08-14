int lengthOfLongestSubstring(char* s) {
    int max = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int seen[256] = {0};
        int length = 0;

        for (int j = i; s[j] != '\0'; j++) {
            if (seen[(unsigned char)s[j]] == 1) {
                break;
            }

            seen[(unsigned char)s[j]] = 1;
            length++;
        }

        if (length > max) {
            max = length;
        }
    }

    return max;
}