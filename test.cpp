#include <iostream>
#include <random>
#include <vector>
#include <chrono>
using namespace std;

vector<double>brute_force(vector<double> vd)
{
    int max_length=1;
    double sum_temp,max_sum=vd.at(0);
    auto max_start=0;
    vector<double> result(3);

    for(auto i = 0;i<vd.size()-1;i++)
    {  sum_temp=0;
        for(auto j = i;j<vd.size();j++)
        {
            sum_temp+=vd.at(j);
            if(sum_temp>max_sum)
            {//storage the current maximum sum subsequence
                max_sum=sum_temp;
                max_start=i;
                max_length=j-i+1;
            }
        }
    }
    //To keep consistence, we return results which is a double vector
    result.at(0)=max_start;
    result.at(1)=max_start+max_length-1;
    result.at(2)=max_sum;

    return result;
}

vector<double>maxSumSeqmid(vector<double> & vd, size_t mid_index, size_t min_index, size_t max_index)
{//This function helps me to find the maximum sum subsequence that contains the mid point;
    //And the algorithm complexity is O(n)
    vector<double> midmaxSumSeq={static_cast<double>(mid_index),static_cast<double>(mid_index),0};
    double sumleft=0,sumright=0;
    double sumleftmax=vd.at(mid_index),sumrightmax=vd.at(mid_index);

    for(size_t i=mid_index;i<=max_index;i++)
    {//find the maximum of the former part;
        sumright+=vd.at(i);
        if(sumright>sumrightmax){sumrightmax=sumright;midmaxSumSeq.at(1)=static_cast<double>(i);}
    }
    for(size_t i=mid_index;i>=min_index;i--)//It can't be mid_index-1 because spilling out.
    {//find the maximum of the latter part;
        sumleft+=vd.at(i);
        if(sumleft>sumleftmax){sumleftmax=sumleft;midmaxSumSeq.at(0)=static_cast<double>(i);}
        if(i==0) break;//for size_t, it's better not use i-- since it is unsigned.
    }
    midmaxSumSeq.at(2)=sumleftmax+sumrightmax-vd.at(mid_index);

    return midmaxSumSeq;
}

vector<double>maxSumSeq(vector<double> & vd, size_t min_index, size_t max_index)
{
    if(max_index==min_index)
    {
        vector<double> min_block={static_cast<double>(min_index),static_cast<double>(max_index),vd.at(max_index)};
        return min_block;
    }//End condition

    size_t mid_index=(max_index+min_index)/2;

    vector<double> former=maxSumSeq(vd,min_index,mid_index);
    vector<double> latter=maxSumSeq(vd,mid_index+1,max_index);
    vector<double> mid=maxSumSeqmid(vd,mid_index,min_index,max_index);
    //Merge the sub question
    if(former.at(2)>latter.at(2)&&former.at(2)>mid.at(2))
        return former;
    else if(latter.at(2)>mid.at(2))
        return latter;
    else
        return mid;
}

int main(int argc, char *argv[]){
    int seedN,sizeN;
    std::default_random_engine generator;

    sizeN = atoi(argv[1]); // convert string to int
    seedN = atoi(argv[2]);

    vector<double> vd(sizeN);
    generator.seed(seedN);

    std::uniform_real_distribution<double> distUniform(-100,100);
    size_t i;
    for(i = 0; i < sizeN; i++)
        vd.at(i) = distUniform(generator);

    // implement your own function
    auto t1 = chrono::high_resolution_clock::now();
    vector<double> result1 = maxSumSeq(vd, 0, sizeN-1);
    auto t2 = chrono::high_resolution_clock::now();
    vector<double> result2 = brute_force(vd);
    auto t3 = chrono::high_resolution_clock::now();
    // record time and compare
    chrono::duration<double, std::milli> fp_ms1 = t2 - t1;
    chrono::duration<double, std::milli> fp_ms2 = t3 - t2;

    int left, right;
    left = result1.at(0);
    right = result1.at(1);

    //cout << "The consecutive subarray with maximum summation for divide and conquer algorithm is:" << std::endl;
    //for(i = left; i <=right; i++)
    //cout << vd.at(i) << " ";
    // cout << std::endl;
    cout << "Their summation for divide and conquer algorithm is:" << result1.at(2) << std::endl;
    cout << "The elapsed time to for divide and conquer algorithm: " <<
         fp_ms1.count() << " milliseconds." << std::endl;

    left = result2.at(0);
    right = result2.at(1);

    // cout << "The consecutive subarray with maximum summation for brute_force algorithm is:" << std::endl;
    // for(i = left; i <=right; i++)
    //cout << vd.at(i) << " ";
    // cout << std::endl;
    cout << "Their summation for brute_force algorithm is:" << result2.at(2) << std::endl;
    cout << "The elapsed time to for brute_force algorithm: " <<
         fp_ms2.count() << " milliseconds." << std::endl;

    return 0;
}