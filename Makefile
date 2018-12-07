.PHONY: clean All

All:
	@echo "----------Building project:[ 20e - Debug ]----------"
	@cd "20e" && "$(MAKE)" -f  "20e.mk"
clean:
	@echo "----------Cleaning project:[ 20e - Debug ]----------"
	@cd "20e" && "$(MAKE)" -f  "20e.mk" clean
