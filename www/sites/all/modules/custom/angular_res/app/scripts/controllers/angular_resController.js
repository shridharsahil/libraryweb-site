(function () {
  'use strict';
  angular
    .module('angular_res')
    .controller('angular_resController', angular_resController);

  angular_resController.$inject = [];

  /* @ngInject */
  function angular_resController() {
    /* jshint validthis: true */
    var vm = this;

    vm.addTwoNums = addTwoNums;

    activate();

///  $http.get('resource').success(function (result) {
/// //  $http.get('json/rc_res').success(function (result) {
///    $scope.angular_res = (function() {
///      return result.nodes;
///    })();
///  });


    ////////////////

    // We use this function to encapsulate the initialization of the controller
    function activate() {
      vm.foobar = 'Controller Tests OK';
      vm.quxqaz = 'Hello World!';
    }

    // This is a simple function that adds two number
    function addTwoNums(num1, num2) {
      return num1 + num2;
    }

  }
})();
