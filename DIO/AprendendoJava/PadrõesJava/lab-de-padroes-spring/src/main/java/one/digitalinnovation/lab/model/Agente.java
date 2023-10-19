package one.digitalinnovation.lab.model;

import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.OneToMany;

public class Agente {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private Long id;

    private String uuid;
    private String description;
    private String displayIcon;
    private String displayIconSmall;
    private String bustPortrait;
    private String fullPortrait;
    private String fullPortraitV2;
    private String killfeedPortrait;
    private String background;
    private List<String> backgroundGradientColors;
    @OneToMany
    private Role role;
    private Map<String, Object> additionalProperties = new LinkedHashMap<String, Object>();

    public String getUuid() {
        return uuid;
    }

    public void setUuid(String uuid) {
        this.uuid = uuid;
    }

    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    public String getDisplayIcon() {
        return displayIcon;
    }

    public void setDisplayIcon(String displayIcon) {
        this.displayIcon = displayIcon;
    }

    public String getDisplayIconSmall() {
        return displayIconSmall;
    }

    public void setDisplayIconSmall(String displayIconSmall) {
        this.displayIconSmall = displayIconSmall;
    }

    public String getBustPortrait() {
        return bustPortrait;
    }

    public void setBustPortrait(String bustPortrait) {
        this.bustPortrait = bustPortrait;
    }

    public String getFullPortrait() {
        return fullPortrait;
    }

    public void setFullPortrait(String fullPortrait) {
        this.fullPortrait = fullPortrait;
    }

    public String getFullPortraitV2() {
        return fullPortraitV2;
    }

    public void setFullPortraitV2(String fullPortraitV2) {
        this.fullPortraitV2 = fullPortraitV2;
    }

    public String getKillfeedPortrait() {
        return killfeedPortrait;
    }

    public void setKillfeedPortrait(String killfeedPortrait) {
        this.killfeedPortrait = killfeedPortrait;
    }

    public String getBackground() {
        return background;
    }

    public void setBackground(String background) {
        this.background = background;
    }

    public List<String> getBackgroundGradientColors() {
        return backgroundGradientColors;
    }

    public void setBackgroundGradientColors(List<String> backgroundGradientColors) {
        this.backgroundGradientColors = backgroundGradientColors;
    }

    public Role getRole() {
        return role;
    }

    public void setRole(Role role) {
        this.role = role;
    }

    public Map<String, Object> getAdditionalProperties() {
        return this.additionalProperties;
    }

    public void setAdditionalProperty(String name, Object value) {
        this.additionalProperties.put(name, value);
    }

}
