public class Gene {
    private int GeneId;
    private String GeneName;
    private String GeneDesc;
    public Gene(){
        this.GeneId=0;
        this.GeneName=null;
        this.GeneDesc=null;
    }
    public Gene(int GeneID,String GeneName,String GeneDesc){
        this.GeneId=GeneID;
        this.GeneDesc=GeneDesc;
        this.GeneName=GeneName;
    }
    public void setGeneName(String name){
        this.GeneName=name;
    }
    public String getGeneName(){
        return GeneName;
    }

    public void ShowGene(){
        System.out.println("GeneId: "+GeneId);
        System.out.println("GeneName: "+GeneName);
        System.out.println("GeneDesc: "+GeneDesc);
    }
}
