library(RcppTest)
library(bigmemory)
library(rMVP)

# arma_test()

# MVP.Data(fileBed="/Users/shenxiong/Desktop/RcppTest/data/Corn281",
#          fileKin=TRUE,
#          filePC=TRUE,
#          out="mvp.plink"
# )
genotype <- as.matrix(attach.big.matrix("/Users/shenxiong/Desktop/RcppTest/data/mvp.plink.geno.desc"))
genotype <- t(genotype)
map <- read.table("/Users/shenxiong/Desktop/RcppTest/data/mvp.plink.geno.map", header = TRUE)
Kinship <- attach.big.matrix("/Users/shenxiong/Desktop/RcppTest/data/mvp.plink.kin.desc")
PC <- attach.big.matrix("/Users/shenxiong/Desktop/RcppTest/data/mvp.plink.pc.desc")
phenotype <- read.table("/Users/shenxiong/Desktop/RcppTest/data/mvp.phe", header = TRUE)
weights = rnorm(281)
weights = as.matrix(weights)


n <- nrow(genotype)
m <- ncol(genotype)
ys <- as.numeric(as.matrix(phenotype[,2]))
X0 <- matrix(1, n)
X0 <- cbind(matrix(1, n), PC)
glm_wls_c(y = ys, X = X0, genotype, weights = weights)