import esphome.codegen as cg
import esphome.config_validation as cv

from esphome.components import climate
from esphome.const import CONF_ID, CONF_NAME

AUTO_LOAD = ["climate"]

DEPENDENCIES = []

haier_ir_remote_ns = cg.esphome_ns.namespace("haier_ir_remote")

HaierIRRemoteClimate = haier_ir_remote_ns.class_(
    "HaierIRRemoteClimate",
    climate.Climate,
    cg.Component,
)

CONFIG_SCHEMA = climate.CLIMATE_SCHEMA.extend(
    {
        cv.GenerateID(): cv.declare_id(HaierIRRemoteClimate),
    }
).extend(cv.COMPONENT_SCHEMA)

async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])

    await cg.register_component(var, config)
    await climate.register_climate(var, config)
