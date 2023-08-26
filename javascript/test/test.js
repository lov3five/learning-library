const cluster = require('cluster')
const { log, timeLog } = require('console')
const process = require('process')

const numWorkers = require('os').cpus().length
log(numWorkers);
timeLog(numWorkers)