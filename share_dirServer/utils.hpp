#include<iostream>
#define WWWROOT "www"
#define MAX_PATH 256

bool PathIsLegal(std::string &path , RequestInfo &info)
{
    std::string file = WWWROOT + info._path_info;
    if(stat(path.c_str() , &info._st) < 0)
    {
        info._err_code = "404"
        return false;
    }
    char tmp[MAX_PATH] = {0};
    realpath(file.c_str(),tmp);//tmp就是得到的绝对路径
    info._path_phys = tmp;
    if(info._path_phys.find(WWWROOT) == std::string::npos)
    {
        info._err_code = "403";
        return false;
    }
    return true;
}


class Utils
{
    public:
        static int Split(std::string &src , const std::string &seg, std::vector<string> &list)
        {
            int num=0,idx=0;
            //key: val\r\nkey:val\r\nkey:val
            while(idx < src.length())
            {
                pos = src.find(seg,idx);
                if(pos == std::string::npos)
                {
                    break;
                }
                list.push_back(src.substr(idx,pos-idx));
                num++;
                idx = pos + seg.length();
            }
            if(idx < src.length())
            {
                list.push_back(src.substr(idx));
                num++;
            }
            return num;
        }
};
