class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::unordered_map<int, int> counts;
    for (int num : arr) {
        counts[num]++;
    }

    std::unordered_set<int> occurrences;
    for (const auto& pair : counts) {
        if (!occurrences.insert(pair.second).second) {
            return false; // إذا كانت القيمة موجودة بالفعل في مجموعة التكرارات، فهذا يعني أن التكرارات ليست فريدة.
        }
    }

    return true;
}

};