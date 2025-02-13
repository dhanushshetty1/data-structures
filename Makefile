.PHONY: clean All

All:
	@echo "----------Building project:[ lower_triangle_Matrices_C++ - Debug ]----------"
	@cd "lower_triangle_Matrices_C++" && "$(MAKE)" -f  "lower_triangle_Matrices_C++.mk"
clean:
	@echo "----------Cleaning project:[ lower_triangle_Matrices_C++ - Debug ]----------"
	@cd "lower_triangle_Matrices_C++" && "$(MAKE)" -f  "lower_triangle_Matrices_C++.mk" clean
