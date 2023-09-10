/*int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);

    int plat_need=1;
    int res=1;

    int i=1,j=0;
    
    while(i<n && j<n){
        if(at[i]<=dt[j]){
          plat_need++;
          i++;
        }else{
          plat_need--; 
          j++; 
        }
        res=max(plat_need,res);
    }
  return res;
}
*/