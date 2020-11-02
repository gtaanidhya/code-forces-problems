.PHONY: clean All

All:
	@echo "----------Building project:[ a-boy-or-girl - Debug ]----------"
	@cd "a-boy-or-girl" && "$(MAKE)" -f  "a-boy-or-girl.mk"
clean:
	@echo "----------Cleaning project:[ a-boy-or-girl - Debug ]----------"
	@cd "a-boy-or-girl" && "$(MAKE)" -f  "a-boy-or-girl.mk" clean
