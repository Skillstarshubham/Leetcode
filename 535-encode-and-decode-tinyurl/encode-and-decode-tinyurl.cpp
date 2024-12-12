class Solution {
public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        longUrl[0]=char(int(longUrl[0])+1);
        return longUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        shortUrl[0]=char(int(shortUrl[0])-1);
        return shortUrl;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));