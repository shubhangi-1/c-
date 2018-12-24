#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


struct Interval {
    int start;
    int end;
};
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start) ? true : false;
}
// Complete the howManyAgentsToAdd function below.
int howManyAgentsToAdd(int noOfCurrentAgents, vector<vector<int>> callsTimes) {
  map<int, int> se;
  Interval a[callsTimes.size()];
  // var set = new SortedList<int, int>();
  int n=callsTimes.size();
  for (int i = 0; i < callsTimes.size(); ++i) {
    int b = callsTimes[i][0];
    int e = callsTimes[i][1];
    a[i].start = b;
    a[i].end=e;
    if(!se[b])
    {
        se[b]=1;
    }
    else
        se[b]++;
    if (!se[e]){
      se[e]=-1;
    }
    else
        se[e]--;
  }
  int i;int num=0;int maxx=0;
    for(i=0;i<se.size();i++){
        num += se[i];
        if (maxx < num)
          maxx = num;
      }

  // sort(a, a + n - 1, compareInterval);
//   int arr[n];
//   int exit[n];
//   for (int i = 0; i < callsTimes.size(); ++i) {
//     arr[i] = 0;
//     exit[i] = 0;
//      }
//   for (int i = 0; i < callsTimes.size(); ++i) {
//       //cout<<"@@"<<a[i].start<<" "<<a[i].end<<"\n";
//       arr[i]=a[i].start;
//       exit[i]=a[i].end;
//   }
//   sort(arr, arr+n);
//    sort(exit, exit+n);

//   int guests_in = 1, max_guests = 1, time = arr[0];
//    int i = 1, j = 0;

//    // Similar to merge in merge sort to process
//    // all events in sorted order
//    while (i < n && j < n)
//    {
//       // If next event in sorted order is arrival,
//       // increment count of guests
//       if (arr[i] <= exit[j])
//       {
//           guests_in++;

//           // Update max_guests if needed
//           if (guests_in > max_guests)
//           {
//               max_guests = guests_in;
//               time = arr[i];
//           }
//           i++;  //increment index of arrival array
//       }
//       else // If event is exit, decrement count
//       {    // of guests.
//           guests_in--;
//           j++;
//       }
//    }

//     if (!set.ContainsKey(b))
//       set.Add(b, +1);
//     else
//       set[b]++;
//     if (!set.ContainsKey(e))
//       set.Add(e, -1);
//     else
//       set[e]--;
//     }
//     var max = 0;
//     var num = 0;
//     foreach (var val in set.Values) {
//       num += val;
//       if (max < num)
//         max = num;
//     }
//     return max - numberOfAgents;
//   }
return maxx-noOfCurrentAgents;
}

int main()
