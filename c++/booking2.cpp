#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


struct Interval {
    int start;
    int end;
};

// Complete the howManyAgentsToAdd function below.
int howManyAgentsToAdd(int noOfCurrentAgents, vector<vector<int>> callsTimes) {
  map<int, int> set;
  Interval arr1[callsTimes.size()];


  // var set = new SortedList<int, int>();
  for (int i = 0; i < callsTimes.size(); ++i) {
    int b = callsTimes[i][0];
    int e = callsTimes[i][1];
  }

    if (!set.ContainsKey(b))
      set.Add(b, +1);
    else
      set[b]++;
    if (!set.ContainsKey(e))
      set.Add(e, -1);
    else
      set[e]--;
    }
    var max = 0;
    var num = 0;
    foreach (var val in set.Values) {
      num += val;
      if (max < num)
        max = num;
    }
    return max - numberOfAgents;
  }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string noOfCurrentAgents_temp;
    getline(cin, noOfCurrentAgents_temp);

    int noOfCurrentAgents = stoi(ltrim(rtrim(noOfCurrentAgents_temp)));

    string callsTimes_rows_temp;
    getline(cin, callsTimes_rows_temp);

    int callsTimes_rows = stoi(ltrim(rtrim(callsTimes_rows_temp)));

    string callsTimes_columns_temp;
    getline(cin, callsTimes_columns_temp);

    int callsTimes_columns = stoi(ltrim(rtrim(callsTimes_columns_temp)));

    vector<vector<int>> callsTimes(callsTimes_rows);

    for (int i = 0; i < callsTimes_rows; i++) {
        callsTimes[i].resize(callsTimes_columns);

        string callsTimes_row_temp_temp;
        getline(cin, callsTimes_row_temp_temp);

        vector<string> callsTimes_row_temp = split(rtrim(callsTimes_row_temp_temp));

        for (int j = 0; j < callsTimes_columns; j++) {
            int callsTimes_row_item = stoi(callsTimes_row_temp[j]);

            callsTimes[i][j] = callsTimes_row_item;
        }
    }

    int res = howManyAgentsToAdd(noOfCurrentAgents, callsTimes);

    fout << res << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
