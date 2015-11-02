describe('Controller: angular_resController', function () {

  // vm will hold the controller. We name it vm since the variable
  // name does not matter for testing purposes. Also, using vm makes
  // it easy to code tests vm is esier to type than angular_resController
  var vm;

  // We use one beforeEach instead of two.
  beforeEach(function () {
    // Use angular mocks module function to load the angular app
    module('angular_res');

    // Use angular mocks inject function to get $controller and instantiate a controller
    inject(function ($controller) {
      // Instantiate the controller
      vm = $controller('angular_resController', {});
    });

  });


  // We use describes to logically group tests
  // This group of tests test that the activate function does what
  // it is supposed to do
  describe('activate()', function () {

    // Test One
    it('should have foobar be Controller Tests OK', function () {
      expect(vm.foobar).toBe('Controller Tests OK');
    });

    // Test two
    it('should have quxqaz be Hello World!', function () {
      expect(vm.quxqaz).toBe('Hello World!');
    });

  });

  // Here is a second logical grouping. This group tests the function addTwoNums
  describe('addTwoNums', function () {
    it('should return a value of 4', function () {
      // We call the functin addTwoNums and pass it in some parameter
      var expectedResult = vm.addTwoNums(2, 2);
      expect(expectedResult).toBe(4);
    });
  });


});
