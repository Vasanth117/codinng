class graph{
    int mat[][];
    int ver;
    graph(int v){
        ver=v;
        mat=new int[ver][ver];
    }
    void addEdge(int src,int dest){
        mat[src][dest]=1;
        mat[dest][src]=1;
    }
    void printGraph(){
        for(int i=0;i<=ver;i++){
            for(int j=0;j<ver;j++){
                System.out.print(mat[i][j]+" ");
            }
            System.out.println();
        }
    }
    void printneighbors(int v){
        for(int i=0;i<ver;i++){
            if(mat[v][i]==1){
                System.out.print(i+" ");
            }
        }
    }
    void removeEdge(int src,int dest){
        mat[src][dest]=0;
        mat[dest][src]=0;
    }
    void neighbors(int v){
        int count=0;
        for(int i=0;i<ver;i++){
            if(mat[v][i]==1){
                count++;
            }
        }
        System.out.println("Number of neighbors of vertex "+v+" is: "+count);
    }

}

public class test {
    public static void main(String args[]){
        graph g=new graph(5);
        g.addEdge(0,1);
        g.addEdge(0,4);
        g.addEdge(1,2);
        g.addEdge(1,3);
        g.addEdge(1,4);
        g.addEdge(2,3);
        g.printGraph();
    }
}