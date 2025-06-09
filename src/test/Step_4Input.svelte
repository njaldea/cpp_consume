<script lang="ts">
    import { xit } from "@nil-/xit";

    const { values } = xit();

    const x = values.double("x", 0);
    const y = values.double("y", 0);
    const r = values.double("radius", 0);
</script>

<div><label><input type="range" min="0" max="10" step="0.1" bind:value={$x}>x</label></div>
<div><label><input type="range" min="0" max="10" step="0.1" bind:value={$y}>y</label></div>
<div><label><input type="range" min="0" max="10" step="0.1" bind:value={$r}>r</label></div>