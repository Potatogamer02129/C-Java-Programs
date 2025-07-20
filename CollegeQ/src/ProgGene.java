public class ProgGene {
    public static void main(String[] args) {
        Gene gene1 = new Gene();
        Gene gene2 = new Gene(1,"FTO","Obesity Related Gene");
        gene1.setGeneName("IGPS");
        String name= gene2.getGeneName();
        System.out.println(name);
        gene1.ShowGene();
        gene2.ShowGene();
    }
}
