.PHONY: clean All

All:
	@echo "----------Building project:[ 10e - Debug ]----------"
	@cd "10e" && "$(MAKE)" -f  "10e.mk"
clean:
	@echo "----------Cleaning project:[ 10e - Debug ]----------"
	@cd "10e" && "$(MAKE)" -f  "10e.mk" clean
