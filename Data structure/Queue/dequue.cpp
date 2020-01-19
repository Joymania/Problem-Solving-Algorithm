#include <bits/stdc++.h>
using namespace std;

int main()
{
	int choice,data;
	deque<int>mq;
	while(true){
		scanf("%d",&choice);
		if(choice==1){
			scanf("%d",&data);
			mq.push_front(data);
		}
		else if(choice==2){
			scanf("%d",&data);
			mq.push_back(data);
		}
		else if(choice==3){
			if(!mq.empty())
			mq.pop_front();
			else
			printf("Dequeue is empty\n");
		}
		else if(choice==4){
			if(!mq.empty())
			mq.pop_back();
			else
			printf("Dequeue is empty\n");
		}
		else if(choice==5){
			printf("%d\n",mq.front());
		}
		else if(choice==6){
			printf("%d\n",mq.back());
		}
		else if(choice==7){
			while(!mq.empty()){
				printf("%d\t",mq.front());
				mq.pop_front();
			}
		}
	}
}
