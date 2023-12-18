Rscript -e "Rcpp::compileAttributes()"

MAKE="make -j 8" R CMD INSTALL --preclean --no-multiarch --with-keep.source .

Rscript run.R

