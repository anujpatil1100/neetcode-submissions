class Solution:
    dicd={}
    def encode(self, strs: List[str]) -> str:
        k=0;
        pk=""
        for i in strs:
            self.dicd[k]=i
            pk+=str(k)+","
            k+=1

        return pk    

    def decode(self, s: str) -> List[str]:
        jk=s.split(',')
        pt=jk[:-1]
        ans=[]

        for i in pt:
            ans.append(self.dicd[int(i)])
        

        return ans;


