#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];  // pivot value
    int i = low;
    int j = high;

    while (i < j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (j >= low && arr[j] > pivot) j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void QuickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int partition = Partition(arr, low, high);
        QuickSort(arr, low, partition - 1);
        QuickSort(arr, partition + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
