<?php
/**
 * @file
 *  Taxonomy Business Needs migration.
 */

class SBPMigrationTermBusinessNeeds extends SBPMigrationTerm {

  public function __construct($arguments) {
    $this->setProperties('business_needs');
    parent::__construct($arguments);
    $this->description = t('Import Business Needs terms.');
  }

  function csvcolumns() {
    $columns = parent::csvcolumns();
    return $columns;
  }

}