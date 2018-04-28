buildable_parasite_pop_1 = {
		
	prerequisites = {
		"tech_parasite_workers"
	}
	cost = {
		food = 10
	}
	
	allow = {
		OR = {
			has_policy_flag = ai_servitude
			has_policy_flag = ai_full_rights
		}
	}
	
	potential = {
		NOT = {
			has_technology = "tech_droid_workers"
			has_technology = "tech_synthetic_workers"
			has_country_flag = synthetic_age
		}
	}
	
	tile_potential = {
		always = yes
	}

	tile_allow = {
		always = yes
	}
	
	species = {
		name = "PARASITE"
		name_list = "Prethoryn"
		class = "ART"
		portrait = "art3"
		traits = {
			trait = "trait_extremely_adaptive"
			trait = "trait_rapid_breeders"
		}
		new_pop_resource_requirement = {
			type = food 
			value = 1
		}
		pops_auto_growth = 1.0
		//pops_auto_upgrade_to = buildable_robot_pop_2

		pops_can_be_colonizers = no
		pops_can_migrate = no
		pops_can_reproduce = yes
		pops_can_join_factions = no
		pop_maintenance = 0
		pops_can_be_slaves = no
		can_generate_leaders = no
		can_be_modified = no
		pops_have_happiness = no
		consumer_goods = no
		pop_ethics = no
	}
}
	species = founder_species
}
