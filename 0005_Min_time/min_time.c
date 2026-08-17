long long minimumTime(int* time, int timeSize, int totalTrips) {

long long int mintime=time[0],i;    
for(i=1;i<timeSize;i++){
        if(time[i]<mintime){
            mintime=time[i];

        }
}

long long int left=1;
long long int right= mintime*totalTrips;

while(left<right){
 long long int mid=left+(right-left)/2;
long long int total=0;

for(i=0;i<timeSize;i++){
  
  total=total+mid/time[i];
}
if(total>=totalTrips){
right=mid;
 }

else{

    left=mid+1;
}
 }
return left;



}