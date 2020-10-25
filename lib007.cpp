#include "lib007.hpp"
#include <iostream>
using namespace std;




/*
 Дан массив A ненулевых целых чисел размера 10. Вывести значение
 первого из тех его элементов AK, которые удовлетворяют неравенству
 AK < A10. Если таких элементов нет, то вывести 0.
 */

void taskArray_18(){
    
    
    
    int a[11];
        int k;

        for (k=0; k<10; ++k){
            cout<<"a["<<k+1<<"] : ";
            cin>>a[k];

        }
    for (k=0; a[k]>=a[9]; ++k) ;

        if (k==10) cout<<"0"<<endl;
        else cout<<a[k]<<endl;
}


/*
 Дан целочисленный массив A размера 10. Вывести порядковый номер
 последнего из тех его элементов AK, которые удовлетворяют двойному не-
 равенству A1 < AK < A10. Если таких элементов нет, то вывести 0.
 */


void taskArray_19(){
    int k;
    int a [10];//заданный массив
        for (int k = 0; k < 10; k ++)
        {
            cout<<"a["<<k<<"] :";
            cin >> a [k];
        }
    
    for (k=8; ((a[0]>=a[k]) || (a[k]>=a[9])) && (k>0) ; --k);
    if(k==0) cout<<0<<endl;
    else cout<<a[k]<<endl;
}




/*
 Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти сум-
 му элементов массива с номерами от K до L включительно.
 */

void taskArray_20(){
    int a[10];
      int num, i;
    int k,l;
      cout<<"N: ";
      cin>>num;
    cout<<"K: ";
    cin>>k;
    cout<<"L: ";
    cin>>l;
    if(k>=1 && l>=k){
        
        int *p_darr = new int[num];
        for (int i = 1; i < num+1; i++) {
            cout<<"a["<<i<<"] : ";
            cin>> p_darr [i];
        }
        int sum=0;
           for (i=k-1; i<=l-1; ++i) sum+=a[i];
        
           cout<<"sum : "<<sum<<endl;
    }
    else  cout<<"Error"<<endl;
}
/*
 Дан массив размера N. Найти номера тех элементов массива, которые
 больше своего правого соседа, и количество таких элементов. Найденные
 номера выводить в порядке их возрастания.
 */



/*
 Дан массив A размера N. Найти минимальный элемент из его элемен-
 тов с четными номерами: A2, A4, A6, ... .
 */


void taskArray_28(){

    int num;
      cout << "Enter integer value: ";
      cin >> num;
    int i;
      int *p_darr = new int[num];
      for (int i = 1; i < num+1; i++) {
          cout<<"a["<<i<<"] : ";
          cin>> p_darr [i];
      }
    int min = p_darr[2];
   
      for (i=2; i<num; i+=2) {
          if (p_darr[i]<=min) min=p_darr[i];
      }
   
    cout<<"a[i] : "<<min<<endl;
    
      delete [] p_darr;
    
}

/*
 Дан массив A размера N. Найти максимальный элемент из его элементов с нечетными номерами:
 A1,   A3,   A5, … .
 */

void taskArray_29(){
    int num;
      cout << "Enter integer value: ";
      cin >> num;
    int i;
      int *p_darr = new int[num];
      for (int i = 0; i < num; i++) {
          cout<<"a["<<i<<"] : ";
          cin>> p_darr [i];
      }
    int max = p_darr[0];
    
       for (i=0; i<num; i+=2) {         if (p_darr[i]>max) max=p_darr[i];
       }
    
    cout<<max<<endl;
    
}
/*
 Дан массив размера N. Найти номера тех элементов массива, которые
 больше своего правого соседа, и количество таких элементов. Найденные
 номера выводить в порядке их возрастания.
 */
void  taskArray_30(){
    int a[10];
    int num, i;
    int n = 0;
      cout<<"N: ";
      cin>>num;
    int *p_darr = new int[num];
    for (int i = 1; i < num+1; i++) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr [i];
    }
    
        for (i=0; i<num-1; ++i) {
            if (a[i]>a[i+1]) {
                cout<<i+1<<" элемент > своегое правого соседа"<<endl;
                ++n;
            }
        }
        
    cout<<"Элементов которые > своего правого соседа : "<<num<<endl;
    
}

/*
 Дан массив размера N. Найти количество участков, на которых его элементы монотонно убывают.
  */

void taskArray_38(){
        int n;
     
    cout<<"N: ";
    cin>>n;
     
        int i,num=0;
    
    int *p_darr = new int[n];
    for (int i = 0; i < n; i++) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr [i];
    }
    
    
    
     
        for (i=2;i<n;++i){
            if ((p_darr[i-2]>p_darr[i-1]) && !(p_darr[i-1]>p_darr[i])){
                ++num;
            }
     
        }
     
        if (p_darr[n-2]>p_darr[n-1]) ++num;
     
   cout<<num<<endl;
}


/*
 Дан массив размера N. Найти количество его промежутков монотон-
 ности (то есть участков, на которых его элементы возрастают или убыва-
 ют).
 */

void taskArray_39(){
        int n;
     
    cout<<"N: ";
    cin>>n;
     
        int i,num=0;
    
    int *p_darr = new int[n];
    for (int i = 0; i < n; i++) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr [i];
    }
     
        for (i=2;i<n;++i){
            if ((p_darr[i-2]>p_darr[i-1]) && !(p_darr[i-1]>p_darr[i])){
                ++num;
            }
            if ((p_darr[i-2]<p_darr[i-1]) && !(p_darr[i-1]<p_darr[i])){
                ++num;
            }
        }
     
        if (p_darr[n-2]!=p_darr[n-1]) ++num;
     
   cout<<num<<endl;
    
}

/*
 Дано число R и массив A размера N. Найти элемент массива, который
 наиболее близок к числу R (то есть такой элемент AK, для которого величи-
 на |AK – R| является минимальной).
 */
void taskArray_40(){
    int r,n;
    cout<<"R : ";
    cin>>r;
    cout<<"N : ";
    cin>>n;
    int *p_darr = new int[n];
    for (int i = 0; i < n; i++) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr [i];
    }
    int min = abs(p_darr[0]-r), k=0;
     
        for (int i=1;i<n;++i){
            if ((abs(p_darr[i]-r))<min){
                min = (abs(p_darr[i]-r));
                k = i;
            }
        }
    cout<<p_darr[k]<<endl;
    
}

/*
 Дан целочисленный массив размера N. Найти максимальное количество его одинаковых элементов.
 */

void taskArray_48(){
    

    int n,i;
 
    cout<<"N : ";
    cin>>n;
    int *p_darr = new int[n];
    for (int i = 0; i < n; i++) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr [i];
    }
 
 
    int i2,nummax=0;
    for (i=0; i<n;++i){
        int num = 1;
        for (i2=i+1; i2<n;++i2){
            if (p_darr[i]==p_darr[i2]){
                ++num;
            }
        }
 
        if (num>nummax){
            nummax=num;
        }
 
    }
    cout<<nummax<<endl;
    
}

/*
 Дан целочисленный массив размера N. Если он является перестанов-
 кой, то есть содержит все числа от 1 до N, то вывести 0; в противном слу-
 чае вывести номер первого недопустимого элемента.
 */

void taskArray_49(){

        int n,i;
     
    cout<<"N : ";
    cin>>n;
    int *p_darr = new int[n];
    for (int i = 0; i < n; i++) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr [i];
    }
     
     
        int i2;
        for (i=1; i<=n;++i){
            for (i2=0; i2<n;++i2){
                if (p_darr[i2]==i){
                    i2=n+100;
                    break;
                }
     
            }
            if (i2!=n+100){
                cout<<i<<endl;
                break;
            }
     
        }
        if (i==n+1){
            cout<<0<<endl;
        }
     
    
}

/*
 Дан целочисленный массив A размера N, являющийся перестановкой
 (определение перестановки дано в задании Array49). Найти количество ин-
 версий в данной перестановке, то есть таких пар элементов AI и AJ, в кото-
 рых большее число находится слева от меньшего: AI > AJ при I < J.
 */

void taskArray_50(){

    int n;
    cout<<"N : ";
    cin>>n;
    int *p_darr = new int[n];
    for (int i = 0; i < n; i++) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr [i];
    }
    int num=0,i2;
       for (int i=0; i<n-1;++i){
           for (i2=i+1; i2<n;++i2){             if (p_darr[i]>p_darr[i2]){
                   num++;
               }
           }
       }
       cout<<num<<endl;
}
/*
 Дан массив A размера N. Сформировать новый массив B того же раз-
 мера по следующему правилу: элемент BK равен сумме элементов массива
 A с номерами от 1 до K.
 */
void taskArray_58(){
    
    int b[10];
    int n;
 
    cout<<"N : ";
    cin>>n;
    int k;
    int *p_darr = new int[n];
    for (int k = 0; k < n; ++k) {
        cout<<"a["<<k<<"] : ";
        cin>> p_darr [k];
    }
 
    int i;
    for (k=0; k<n; ++k){
        b[k]=0;
        for (i=0; i<=k; ++i){
            b[k]+=p_darr[i];
        }
    }
 
   cout<<"B : ";
    for (k=0; k<n; ++k) cout<<"b["<<k<<"]"<<b[k]<<endl;
    
}


/*
 
 */

void taskArray_59(){
    
    float b[10];
      int n;
 
    cout<<"N : ";
    cin>>n;
    int k;
    float *p_darr = new float[n];
    for (int k = 0; k < n; ++k) {
        cout<<"a["<<k<<"] : ";
        cin>> p_darr[k];
    }
   
      int i;
      for (k=0; k<n; ++k){
          b[k]=0;
          for (i=0; i<=k; ++i){
              b[k]+=p_darr[i];
          }
          b[k]/=k+1;
      }
   
    cout<<"B : ";
    for (k=0; k<n; ++k) cout<<"b["<<k<<"]"<<b[k]<<endl;
}

/*
 Дан массив A размера N. Сформировать новый массив B того же раз-
 мера по следующему правилу: элемент BK равен сумме элементов массива
 A с номерами от K до N.
 */

void taskArray_60(){
    int b[10];
    int n;
    cout<<"N : ";
    cin>>n;
    int k;
    float *p_darr = new float[n];
    for (int k = 0; k < n; ++k) {
        cout<<"a["<<k<<"] : ";
        cin>> p_darr[k];
    }
    
       int i;
       for (k=0; k<n; ++k){
           b[k]=0;
           for (i=k; i<n; ++i){
               b[k]+=p_darr[i];
           }
       }
    
   cout<<"B: "<<endl;
    for (k=0; k<n; ++k) cout<<"b[k] : "<<b[k]<<endl;
}





/*
 Дан массив размера N. Поменять местами его минимальный и макси-
 мальный элементы.
 */


void taskArray_68(){
    
    
       int n;
    
    cout<<"N : ";
    cin>>n;
    int i;
    float *p_darr = new float[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
    
    
       int min=0,max=0;
    
       for (i=n-1; i>=0; --i){
           if (p_darr[i]>p_darr[max]) max=i;
           if (p_darr[i]<p_darr[min]) min=i;
       }
    
       if (max!=min) {
           p_darr[max]+=p_darr[min];
           p_darr[min]=p_darr[max]-p_darr[min];
           p_darr[max]=p_darr[max]-p_darr[min];
       }
    
       printf("A: \n");
    for (i=0; i<n; ++i)cout<<"a[i] : "<<p_darr[i]<<endl;
    
}



/*
 Дан массив размера N (N − четное число). Поменять местами его первый элемент со вторым, третий − с четвертым
 */

void taskArray_69(){
    
    
    int n;
 
    cout<<"N : ";
    cin>>n;
    int i;
    float *p_darr = new float[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
 
 
    for (i=1; i<n; i+=2){
        p_darr[i]+=p_darr[i-1];
        p_darr[i-1]=p_darr[i]-p_darr[i-1];
        p_darr[i]=p_darr[i]-p_darr[i-1];
    }
 
    printf("A: \n");
    for (i=0; i<n; ++i) cout<<"a[i] : "<<p_darr[i]<<endl;
    
}


/*
 Дан массив размера N (N — четное число). Поменять местами первую
 и вторую половины массива.
 */

void taskArray_70(){
  
     int n;
  
    cout<<"N : ";
    cin>>n;
    int i;
    float *p_darr = new float[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
  
  
     for (i=0; i<n/2;++i){
         p_darr[i]+=p_darr[n/2+i];
         p_darr[n/2+i]=p_darr[i]-p_darr[n/2+i];
         p_darr[i]=p_darr[i]-p_darr[n/2+i];
     }
  
    cout<<"A : "<<endl;
    for (i=0; i<n; ++i) cout<<"a[i] : "<<p_darr[i]<<endl;
    
}


/*
 
 */

void taskArray_78(){
    
    
    int n;
 
    cout<<"N : ";
    cin>>n;
    int i;
    float *p_darr = new float[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
 
    float ai1,ai=p_darr[0];
    p_darr[0]=(ai+p_darr[1])/2;
    for (i=1; i<n-1; ++i){
            ai1=ai;
            ai=p_darr[i];
            p_darr[i]=(ai1+ai+p_darr[i+1])/3;
    }
 
    p_darr[n-1]=(p_darr[n-1]+ai)/2;
 
    printf("A: \n");
    for (i=0; i<n; ++i) cout<<"a[i] : "<<p_darr[i]<<endl;
}


/*
 Дан массив размера N. Осуществить сдвиг элементов массива вправо на одну позицию (при этом A1 перейдет в A2, A2 − в A3, …, AN–1 − в AN, a исходное значение последнего элемента будет потеряно). Первый элемент полученного массива положить равным 0.
 */

void taskArray_79(){
    
    int n;
 
    cout<<"N : ";
    cin>>n;
    int i;
    float *p_darr = new float[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
    for (i=n-1; i>=1; --i) p_darr[i]=p_darr[i-1];
 
    p_darr[0]=0;
 
    printf("A: \n");
    for (i=0; i<n; ++i) cout<<"a[i] : "<<p_darr[i]<<endl;
 
    
}


/*
 Дан массив размера N. Осуществить сдвиг элементов массива влево на
 одну позицию (при этом AN перейдет в AN–1, AN–1 — в AN–2, ..., A2 — в A1,
 a исходное значение первого элемента будет потеряно). Последний эле-
 мент полученного массива положить равным 0.
 */

void taskArray_80(){
    
       int n;
    
    cout<<"N : ";
    cin>>n;
    int i;
    float *p_darr = new float[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
    
       for (i=0; i<n-1; ++i) p_darr[i]=p_darr[i+1];
    
       p_darr[n-1]=0;
    
       cout<<"A : "<<endl;
    for (i=0; i<n; ++i) cout<<"a[i] : "<<p_darr[i]<<endl;
    
}



int swap1(float *f1, float *f2){
    *f1+=*f2;
    *f2=*f1-*f2;
    *f1=*f1-*f2;
    return 0;
}
/*
 Дан массив размера N, все элементы которого, кроме последнего, упорядочены по возрастанию. Сделать массив упорядоченным, переместив последний элемент на новую позицию.
 */

void taskArray_88(){
    int n;
    cout<<"N : ";
    cin>>n;
    int i;
    float *p_darr = new float[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
   
      for (i=n-2; i>=0; --i){
          if (p_darr[i]>p_darr[i+1]) {
              swap1(&p_darr[i], &p_darr[i+1]);
          }
          else break;
      }
      printf("A: \n");
    for (i=0; i<n; ++i) cout<<"a[i] : "<<p_darr[i]<<endl;
    
}

/*
 Дан массив размера N, все элементы которого, кроме одного, упорядочены по убыванию. Сделать массив упорядоченным, переместив элемент, нарушающий упорядоченность, на новую позицию.
 */
int swap2(float *f1, float *f2){
    *f1+=*f2;
    *f2=*f1-*f2;
    *f1=*f1-*f2;
    return 0;
}

void taskArray_89(){
    
    int n;
    cout<<"N : ";
    cin>>n;
    int i;
    float *p_darr = new float[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
     
        for (i=n-2; i>=0; --i){
            if (p_darr[i]<p_darr[i+1]) {
                swap2(&p_darr[i], &p_darr[i+1]);
            }
        }
     
        for (i=1; i<n; ++i){
            if (p_darr[i-1]<p_darr[i]) {
                swap2(&p_darr[i-1], &p_darr[i]);
            }
        }
        printf("A: \n");
        for (i=0; i<n; ++i) cout<<"a[i] : "<<p_darr[i]<<endl;
    
     
}



/*
 Дан массив размера N и целое число K (1 ≤ K ≤ N). Удалить из массива
 элемент с порядковым номером K.
 */

void taskArray_90(){
   
   
   
      int n,k;
    cout<<"N: ";
    cin>>n;
   
    cout<<"K: ";
    cin>>k;

    int i;
    float *p_darr = new float[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
   
      --n;
   
      for (i=k-1; i<n; ++i){
          p_darr[i]=p_darr[i+1];
      }
   
      printf("A: \n");
    for (i=0; i<n; ++i) cout<<"a["<<i<<"] : "<<p_darr[i]<<endl;
}


/*
 Дан целочисленный массив размера N. Удалить из массива все элементы, встречающиеся менее трех раз, и вывести размер полученного массива и его содержимое.
 */

void taskArray_98(){
    
    int n;
    cout<<"N : ";
    cin>>n;
    int i;
    float *p_darr = new float[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
 
    int i2,k=-1,num;
    for (i=0; i<n; ++i){
      for (i2=0;i2<=k;++i2){
          if (p_darr[i]==p_darr[i2]) break;
      }
      if (i2!=k+1){
        ++k;
        p_darr[k]=p_darr[i];
      } else {
        num =0;
        for (i2=i;i2<n;++i2){
            if (p_darr[i2]==p_darr[i])
                ++num;
        }
        if (num>=3){
            ++k;
            p_darr[k]=p_darr[i];
        }
     }
   }
    ++k;
    printf("A - %i\n",k);
    for (i=0; i<k; ++i) cout<<"a["<<i<<"] : "<<p_darr[i]<<endl;
 
    
}



/*
 Дан целочисленный массив размера N. Удалить из массива все элементы, встречающиеся более двух раз, и вывести размер полученного массива и его содержимое.
 */


void taskArray_99(){
    
    int n;
    cout<<"N : ";
    cin>>n;
    int i;
    float *p_darr = new float[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
     
        int ai,i2, k, num;
        for (i=0; i<n;i++){
          num=0;
          for (i2=0; i2<n; ++i2) if (p_darr[i]==p_darr[i2]) ++num;
     
          if (num>2){
              k=i-1;
              ai=p_darr[i];
              for (i2=i;i2<n;++i2)
                  if (p_darr[i2]!=ai){
                      ++k;
                      p_darr[k]=p_darr[i2];
                  }
              n=k+1;
              --i;
          }
       }
     
        printf("A - %i\n",n);
    for (i=0; i<n; ++i) cout<<"a["<<i<<"] : "<<p_darr[i]<<endl;
}

/*
 Дан целочисленный массив размера N. Удалить из массива все эле-
 менты, встречающиеся ровно два раза, и вывести размер полученного мас-
 сива и его содержимое.
 */

void taskArray_100(){

       int n;
    cout<<"N : ";
    cin>>n;
    int i;
    float *p_darr = new float[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
       int ai,i2, k, num;
       for (i=0; i<n;i++){
         num=0;
         for (i2=0; i2<n; ++i2) if (p_darr[i]==p_darr[i2]) ++num;
    
         if (num==2){
             k=i-1;
             ai=p_darr[i];
             for (i2=i;i2<n;++i2)
                 if (p_darr[i2]!=ai){
                     ++k;
                     p_darr[k]=p_darr[i2];
                 }
             n=k+1;
             --i;
         }
      }
    
    cout<<"A : "<<n<<endl;
    for (i=0; i<n; ++i) cout<<"a["<<i<<"] : "<<p_darr[i]<<endl;
    
}


/*
 Дан массив размера N. Перед каждым положительным элементом массива вставить элемент с нулевым значением
 */

void taskArray_108(){
    int n;
    cout<<"N : ";
    cin>>n;
    int i;
    float *p_darr = new float[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
    
       int i2;
       for (i=n-1; i>=0; --i){
           if (p_darr[i]>0){
               ++n;
               for(i2=n-1; i2>i; --i2) p_darr[i2]=p_darr[i2-1];
               p_darr[i]=0;
           }
       }
    
    for (i=0; i<n;++i) cout<<"a["<<i<<"] : "<<p_darr[i]<<endl;
    
}

/*
 Дан массив размера N. После каждого отрицательного элемента массива вставить элемент с нулевым значением.
 */

void taskArray_109(){
    
    int n;
    cout<<"N : ";
    cin>>n;
    int i;
    float *p_darr = new float[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
  
     int i2;
     for (i=n-1; i>=0; --i){
         if (p_darr[i]<0){
             ++n;
             for(i2=n; i2>i; --i2) p_darr[i2]=p_darr[i2-1];
             p_darr[i+1]=0;
         }
     }
  
    for (i=0; i<n;++i) cout<<"a["<<i<<"] : "<<p_darr[i]<<endl;
}


/*
 Дан целочисленный массив размера N. Продублировать в нем все
 четные числа.
 */


void taskArray_110(){
   
       int n;
    cout<<"N : ";
    cin>>n;
    int i;
    int *p_darr = new int[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
    
       int i2;
       for (i=n-1; i>=0; --i){
           if (p_darr[i]%2==0){
               ++n;
               for(i2=n-1; i2>i; --i2) p_darr[i2]=p_darr[i2-1];
           }
       }
    cout<<"a[i]++четные"<<endl;
    for (i=0; i<n;++i) cout<<"a["<<i<<"] : "<<p_darr[i]<<endl;
    
}

/*
 Дан целочисленный массив размера N. Вставить после каждой его серии элемент с нулевым значением.
 */

void taskArray_118(){
    
    int n;
    cout<<"N : ";
    cin>>n;
    int i;
    int *p_darr = new int[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
     
        int i2;
        for (i=0;i<n;++i){
            if (i+1<n){
                if (p_darr[i+1]!=p_darr[i]){
                    ++n;
                    for (i2=n-1; i2>i; --i2) p_darr[i2]=p_darr[i2-1];
                    ++i;
                    p_darr[i]=0;
     
                }
            }
        }
        ++n;
        p_darr[n-1]=0;
     
    for (i=0; i<n;++i) cout<<"a["<<i<<"] : "<<p_darr[i]<<endl;
}

/*
 Дан целочисленный массив размера N. Преобразовать массив, увеличив каждую его серию на один элемент.
 */
void taskArray_119(){
    int n;
    cout<<"N : ";
    cin>>n;
    int i;
    int *p_darr = new int[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
    
       int i2;
       for (i=0;i<n;++i){
           if (i+1<n){
               if (p_darr[i+1]!=p_darr[i]){
                   ++n;
                   for (i2=n-1;i2>i;--i2) p_darr[i2]=p_darr[i2-1];
                   ++i;
               }
           }
       }
       ++n;
       p_darr[n-1]=p_darr[n-2];
    
    for (i=0; i<n;++i) cout<<"a["<<i<<"] : "<<p_darr[i]<<endl;
    
}


/*
 Дан целочисленный массив размера N, содержащий по крайней мере
 одну серию, длина которой больше 1. Преобразовать массив, уменьшив
 каждую его серию на один элемент.
 */

void taskArray_120(){
        int n;
    cout<<"N : ";
    cin>>n;
    int i;
    int *p_darr = new int[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
     
        int i2;
        for (i=0;i<n;++i){
            if (i+1<n){
                if (p_darr[i]!=p_darr[i+1]){
                    --n;
                    for (i2=i; i2<n;++i2) p_darr[i2]=p_darr[i2+1];
                    --i;
                }
            }
        }
        --n;
    cout<<"a[i] при уменьшении серий : "<<endl;
    for (i=0; i<n;++i) cout<<"a["<<i<<"] : "<<p_darr[i]<<endl;
}
/*
 Дан целочисленный массив размера N. Преобразовать массив, увеличив его первую серию наибольшей длины на один элемент.
 */

void taskArray_128(){
    int n;
    cout<<"N : ";
    cin>>n;
    int i;
    int *p_darr = new int[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
     
        int len=1,maxlen=1,endmaxseries=1;
     
        for (i=1; i<n; ++i){
            if (p_darr[i-1]!=p_darr[i]) {
                if (len>maxlen){
                    maxlen=len;
                    endmaxseries=i-1;
                }
                len=0;
            }
            ++len;
        }
        if (len>maxlen){
            maxlen=len;
            endmaxseries=i-1;
        }
     
        for (i=++n-1; i>endmaxseries;--i) p_darr[i]=p_darr[i-1];
     
    for (i=0; i<n;++i) cout<<"a["<<i<<"] : "<<p_darr[i]<<endl;
    
}

/*
 Дан целочисленный массив размера N. Преобразовать массив, увеличив его последнюю серию наибольшей длины на один элемент.
 */

void taskArray_129(){
    int n;
    cout<<"N : ";
    cin>>n;
    int i;
    int *p_darr = new int[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
     
        int len=1,maxlen=1,endmaxseries=1;
     
        for (i=1; i<n; ++i){
            if (p_darr[i-1]!=p_darr[i]) {
                if (len>=maxlen){
                    maxlen=len;
                    endmaxseries=i-1;
                }
                len=0;
            }
            ++len;
        }
        if (len>maxlen){
            maxlen=len;
            endmaxseries=i-1;
        }
     
        for (i=++n-1; i>endmaxseries;--i) p_darr[i]=p_darr[i-1];
     
    for (i=0; i<n;++i) cout<<"a["<<i<<"] : "<<p_darr[i]<<endl;
    
}


/*
 Дан целочисленный массив размера N. Преобразовать массив, увели-
 чив все его серии наибольшей длины на один элемент.
 */

void taskArray_130(){
        int n;
    cout<<"N : ";
    cin>>n;
    int i;
    int *p_darr = new int[n];
    for (int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"] : ";
        cin>> p_darr[i];
    }
     
    int len=1,maxlen=1;
     
        for (i=1; i<n; ++i){
            if (p_darr[i-1]!=p_darr[i]) {
                if (len>=maxlen) maxlen=len;
                len=0;
            }
            ++len;
        }
     
        int i2;
     
        for (i=1; i<n; ++i){
            if (p_darr[i-1]!=p_darr[i]) {
                if (len==maxlen) {
                    for (i2=++n-1; i2>i;--i2) p_darr[i2]=p_darr[i2-1];
                    ++i;
                }
                len=0;
            }
            ++len;
        }
     
     
    cout<<"a[i] при увиличении серий : "<<endl;
    for (i=0; i<n;++i) cout<<"a["<<i<<"] : "<<p_darr[i]<<endl;
    
}



/*
 Дано множество A из N точек с целочисленными координатами x, y.
 Порядок на координатной плоскости определим следующим образом:
 (x1, y1) < (x2, y2), если либо x1 + y1 < x2 + y2, либо x1 + y1 = x2 + y2 и x1 < x2.
 Расположить точки данного множества по убыванию в соответствии с ука-
 занным порядком.
 */


void taskArray_138(){
    
}

void taskArray_139(){
    
}

void swap(float a1[], float a2[]){
    a1[0]+=a2[0];
    a2[0]=a1[0]-a2[0];
    a1[0]-=a2[0];
 
    a1[1]+=a2[1];
    a2[1]=a1[1]-a2[1];
    a1[1]-=a2[1];
}
 
int compare (float a1[], float a2[]){
    if ((a1[0]+a1[1]<a2[0]+a2[1])||((a1[0]+a1[1]==a2[0]+a2[1]) && (a1[0]<a2[0]))) return 1;
    else return 0;
}
 
void taskArray_140()
{
    float a[10][2];
    int n;
 
    cout<<"N: ";
    cin>>n;
 
    int i;
    for (i=0; i<n; ++i){
        cout<<"a["<<i<<"] : "<<endl;
        cout<<" x  : ";
        cin>>a[i][0];
        cout<<"  y  : ";
        cin>>a[i][1];
    }
 
    int i2, n2=n;
 
    for (i=0; i<n-1;i++){
        --n2;
        for (i2=0; i2<n2; i2++)
            if (compare(a[i2+1],a[i2])==0){
                swap(a[i2+1], a[i2]);
            }
    }
    cout<<"====================================="<<endl;
    for (i=0; i<n;i++){
    cout<<"a["<<i<<"] : "<<endl;
        cout<<"  x : "<<a[i][0]<<endl;
        cout<<"  y  :"<<a[i][1]<<endl;
    }
}
void menu(){
    int num;
    cout<<"1.taskArray_18"<<endl;
    cout<<"2.taskArray_19"<<endl;
    cout<<"3.taskArray_20"<<endl;
    cout<<"4.taskArray_28"<<endl;
    cout<<"5.taskArray_29"<<endl;
    cout<<"6.taskArray_30"<<endl;
    cout<<"7.taskArray_38"<<endl;
    cout<<"8.taskArray_39"<<endl;
    cout<<"9.taskArray_40"<<endl;
    cout<<"10.taskArray_48"<<endl;
    cout<<"11.taskArray_49"<<endl;
    cout<<"12.taskArray_50"<<endl;
    cout<<"13.taskArray_58"<<endl;
    cout<<"14.taskArray_59"<<endl;
    cout<<"15.taskArray_60"<<endl;
    cout<<"16.taskArray_68"<<endl;
    cout<<"17.taskArray_69"<<endl;
    cout<<"18.taskArray_70"<<endl;
    cout<<"19.taskArray_78"<<endl;
    cout<<"20.taskArray_79"<<endl;
    cout<<"21.taskArray_80"<<endl;
    cout<<"22.taskArray_88"<<endl;
    cout<<"23.taskArray_89"<<endl;
    cout<<"24.taskArray_90"<<endl;
    cout<<"25.taskArray_98"<<endl;
    cout<<"26.taskArray_99"<<endl;
    cout<<"27.taskArray_100"<<endl;
    cout<<"28.taskArray_108"<<endl;
    cout<<"29.taskArray_109"<<endl;
    cout<<"30.taskArray_110"<<endl;
    cout<<"31.taskArray_118"<<endl;
    cout<<"32.taskArray_119"<<endl;
    cout<<"33.taskArray_120"<<endl;
    cout<<"34.taskArray_128"<<endl;
    cout<<"35.taskArray_129"<<endl;
    cout<<"36.taskArray_130"<<endl;
    cout<<"37.taskArray_138"<<endl;
    cout<<"38.taskArray_139"<<endl;
    cout<<"39.taskArray_140"<<endl;
    cout<<"num : ";
    cin>>num;
    
    switch (num) {
        case 1:
            taskArray_18();
            break;
        case 2:
            taskArray_19();
            break;
        case 3:
            taskArray_20();
            break;
        case 4:
            taskArray_28();
            break;
        case 5:
            taskArray_29();
            break;
        case 6:
            taskArray_30();
            break;
        case 7:
            taskArray_38();
            break;
        case 8:
            taskArray_39();
            break;
        case 9:
            taskArray_40();
            break;
        case 10:
            taskArray_48();
            break;
        case 11:
            taskArray_49();
            break;
        case 12:
            taskArray_50();
            break;
        case 13:
            taskArray_58();
            break;
        case 14:
            taskArray_59();
            break;
        case 15:
            taskArray_60();
            break;
        case 16:
            taskArray_68();
            break;
        case 17:
            taskArray_69();
            break;
        case 18:
            taskArray_70();
            break;
        case 19:
            taskArray_78();
            break;
        case 20:
            taskArray_79();
            break;
        case 21:
            taskArray_80();
            break;
        case 22:
            taskArray_88();
            break;
        case 23:
            taskArray_89();
            break;
        case 24:
            taskArray_90();
            break;
        case 25:
            taskArray_98();
            break;
        case 26:
            taskArray_99();
            break;
        case 27:
            taskArray_100();
            break;
        case 28:
            taskArray_108();
            break;
        case 29:
            taskArray_109();
            break;
        case 30:
            taskArray_110();
            break;
        case 31:
            taskArray_118();
            break;
        case 32:
            taskArray_119();
            break;
        case 33:
            taskArray_120();
            break;
        case 34:
            taskArray_128();
            break;
        case 35:
            taskArray_129();
            break;
        case 36:
            taskArray_130();
            break;
        case 37:
            taskArray_138();
            break;
        case 38:
            taskArray_139();
            break;
        case 39:
            taskArray_140();
            break;
            
            
        default:
            break;
    }
    
}
