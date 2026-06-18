import java.util.*;

class node{
    int data;
    node next;

    node(int d){
        data = d;
        next = null;
    }
}

class graph{
    int v;
    node[] adj;

    graph(int v){
        this.v = v;
        adj = new node[v];
    }

    void addEdge(int s,int d){
        node newNode = new node(d);
        newNode.next = adj[s];
        adj[s] = newNode;

        newNode = new node(s);
        newNode.next = adj[d];
        adj[d] = newNode;
    }

    void printedge(){
        for(int i=0;i<v;i++){
            node temp = adj[i];
            System.out.print("vertex "+i+" : ");
            while(temp!=null){
                System.out.print(temp.data+" ");
                temp=temp.next;
            }
            System.out.println();
        }
    }

    void bfs(int s){
        boolean[] visited = new boolean[v];
        Queue<Integer> queue = new LinkedList<>();

        visited[s]=true;
        queue.add(s);

        while(!queue.isEmpty()){
            int current = queue.poll();
            System.out.print(current+" ");

            node temp = adj[current];
            while(temp!=null){
                if(!visited[temp.data]){
                    visited[temp.data]=true;
                    queue.add(temp.data);
                }
                temp=temp.next;
            }
        }
    }

    void dfs(int s){
        boolean[] visited = new boolean[v];
        dfsUtil(s,visited);
    }

    void dfsUtil(int s,boolean[] visited){
        visited[s]=true;
        System.out.print(s+" ");

        node temp=adj[s];
        while(temp!=null){
            if(!visited[temp.data]){
                dfsUtil(temp.data,visited);
            }
            temp=temp.next;
        }
    }
}

public class grhh{
    public static void main(String[] args){
        graph g = new graph(5);

        g.addEdge(0,1);
        g.addEdge(0,4);
        g.addEdge(1,2);
        g.addEdge(1,3);
        g.addEdge(1,4);
        g.addEdge(2,3);
        g.addEdge(3,4);

        g.printedge();

        System.out.println("\nBFS:");
        g.bfs(0);

        System.out.println("\nDFS:");
        g.dfs(0);
    }
}