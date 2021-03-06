<?php
/**
 * @file
 * Provides an agent type that does not support MVTs.
 */

class PersonalizeTestAgentNoMVT extends PersonalizeAgentBase {

  /**
   * Implements PersonalizeAgentInterface::create().
   */
  public static function create($agent_data) {
    $status = personalize_agent_get_status($agent_data->machine_name);
    return new self($agent_data->machine_name, $agent_data->label, $agent_data->data, $status, !empty($agent_data->started) ? $agent_data->started : NULL);
  }

  /**
   * Implements PersonalizeAgentInterface::getType().
   */
  public function getType()
  {
    return 'test_agent_no_mvt';
  }

  public function supportsMVTs() {
    return FALSE;
  }

}
