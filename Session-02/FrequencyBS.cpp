#include <iostream>
using namespace std;

int binarySearchFirst(int a[], int n, int target) {
	int low = 0, high = n-1;
	while(low <= high) {
		int mid = (low + high)/2;
		if(a[mid] == target) {
			if (mid - 1 <=0 or a[mid -1] < target)
				return mid;
			else
			    high = mid - 1;
		}
		else if(a[mid] > target)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return -1;
}

int binarySearchLast(int a[], int n, int target) {
	int low = 0, high = n-1;
	while(low <= high) {
		int mid = (low + high)/2;
		if(a[mid] == target) {
			if (mid + 1 >= n or a[mid + 1] > target)
				return mid;
			else
				low = mid + 1;
		}
		else if(a[mid] > target)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return -1;
}

int main() {
	int tt;
	cin>>tt;
	while(tt--) {
		int N, target;
		cin>>N>>target;
		int a[N+1];
		for(int i=0;i<N;i++) {
			cin>>a[i];
		}
		int firstOccur = binarySearchFirst(a,N,target);
		//cout<<firstOccur<<" "<<"first"<<endl;
		int lastOccur = binarySearchLast(a,N,target);
		//cout<<lastOccur<<" "<<"last"<<endl;
		if(firstOccur != -1)
			cout<<lastOccur - firstOccur + 1 <<endl;
		else
			cout<<-1<<endl;
	}
}



    
   

	

