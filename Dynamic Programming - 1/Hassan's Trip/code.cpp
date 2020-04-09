// #include <bits/stdc++.h>
// using namespace std;
// double distance(double a, double b, double c, double d)
// {
//     return sqrt(pow((a-c),2) + pow((b-d),2));
// }
// int main()
// {
//     int n;
//     cin >> n;
//     double **details = new double*[n];
//     for(int i = 0; i<n; i++)
//     {
//         details[i] = new double[3];
//         for(int j = 0; j<3; j++)
//             cin >> details[i][j];
//     }
//     // memset(details, DBL_MAX,sizeof(double)*3*n);
//     // for(int i = 0; i<n; i++)
//     // {
//     //     for(int j = 0; j<3; j++)
//     //         details[i][j] = DBL_MAX;
//     // }
//     // int *dp = new int[n];
//     double temp = DBL_MAX;
//     temp = details[0][2] + details[n-1][2] - distance(details[0][0],details[0][1],details[n-1][0],details[n-1][1]);
//     // cout << temp << endl;
//     int x = 0;
//     double fi = details[0][2] + details[n-1][2];
//     // memset
//     for(int i = 1; i<n-1; i++)
//     {
//         double y = temp;

//         temp = max(temp, fi + details[i][2] - (distance(details[i][0],details[i][1],details[x][0],details[x][1]) + distance(details[i][0],details[i][1],details[n-1][0],details[n-1][1])));
//         if(y != temp)
//         {
//             fi = fi + details[i][2];
//             x = i;
//         }

//         // for(int j = i+1; j<i; j++)
//         // {
//         //     dp[i] = 
//         // }
//     }
//     cout <<  fixed << setprecision(6) << temp;
//     return 0;
// }
#include<iostream>

#include<bits/stdc++.h>

using namespace std;

#define ff first 

#define ss second



int main()

 {

  int n;

  cin>>n;

  double dp[n+10];

  vector<pair<pair<int,int>,int> > v;

  for(int i=0;i<n;i++)

  {

  int a,b,c;

   cin>>a>>b>>c;

    v.push_back(make_pair(make_pair(a,b),c));

   }

    dp[0]=v[0].ss;

  //  cout<<dp[0]<<endl;

    for(int i=1;i<n;i++ )

     {

      double temp=-999999999.000;

      double x1=v[i].ff.ff;

      double y1=v[i].ff.ss;

      for(int j=0;j<i;j++)

       {

          double  x2=v[j].ff.ff;

          double   y2=v[j].ff.ss;

          double dec=(x1-x2)*((x1-x2))+(y1-y2)*(y1-y2);

          dec=sqrt(dec);

       //  cout<<"dec val "<<dec<<endl;

        temp=max(temp,dp[j]+v[i].ss-dec);

    }

    dp[i]=temp;

  // cout<<dp[i]<<endl;

  }

 printf("%.6lf\n",dp[n-1]);

 }
