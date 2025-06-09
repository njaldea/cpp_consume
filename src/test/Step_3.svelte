<script lang="ts">
    import { xit } from "@nil-/xit";

    const { values } = xit();

    const x = values.double("x", 0);
    const y = values.double("y", 0);
    const r = values.double("radius", 0);
</script>

<div>x - {$x}</div>
<div>y - {$y}</div>
<div>r - {$r}</div>